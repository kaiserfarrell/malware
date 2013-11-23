@echo off

del %1.obj 2>nul
REM del %1.exe >nul
nasmw -O9 -fwin32 %2 %3 %4 %5 %1.asm
c:\masm32\bin\link /NOLOGO /RELEASE /entry:entry /subsystem:windows /STACK:2097152,1000 %1.obj c:\masm32\lib\kernel32.lib c:\masm32\lib\wininet.lib c:\masm32\lib\wsock32.lib c:\masm32\lib\user32.lib c:\masm32\lib\MSVCRT.LIB c:\masm32\lib\advapi32.lib /OUT:%1.exe
del %1.obj 2>nul
