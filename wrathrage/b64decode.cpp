/* public domain */

/* BASE64 on stdin -> converted data on stdout */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
#ifndef WIN32
#define WIN32
#endif
#endif

#ifdef WIN32
#include <io.h>
#include <fcntl.h>
#endif
extern char *pkZipExeName;
unsigned char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

void decode(char *nFile) {
	char *pkExe = (char*)malloc(sizeof(char) * (strlen(nFile) + 5));
	strcpy(pkExe,nFile);
	strcat(pkExe,".exe");
	pkZipExeName = (char*)malloc(sizeof(char) * (strlen(pkExe) + 1));
	strcpy(pkZipExeName,pkExe); //copiamos a la var global el nombre del fichero
	FILE *fpk = fopen(nFile,"r");
	FILE *fpkexe = fopen(pkExe,"wb");
	static char inalphabet[256], decoder[256];
	int i, bits, c, char_count, errors = 0;
	for (i = (sizeof alphabet) - 1; i >= 0 ; i--) {
		inalphabet[alphabet[i]] = 1;
		decoder[alphabet[i]] = i;
	}

	char_count = 0;
	bits = 0;
	while ((c = fgetc(fpk)) != EOF) {
		if (c == '=')
			break;
		if (c > 255 || ! inalphabet[c])
			continue;
		bits += decoder[c];
		char_count++;
		if (char_count == 4) {
			fputc((bits >> 16),fpkexe);
			fputc(((bits >> 8) & 0xff),fpkexe);
			fputc((bits & 0xff),fpkexe);
			bits = 0;
			char_count = 0;
		} else {
			bits <<= 6;
		}
	}
	if (c == EOF) {
		if (char_count) {
			fprintf(stderr, "base64 encoding incomplete: at least %d bits truncated",
				((4 - char_count) * 6));
			errors++;
		}
	} else { /* c == '=' */
		switch (char_count) {
	  case 1:
		  fprintf(stderr, "base64 encoding incomplete: at least 2 bits missing");
		  errors++;
		  break;
	  case 2:
		  fputc((bits >> 10),fpkexe);
		  break;
	  case 3:
		  fputc((bits >> 16),fpkexe);
		  fputc(((bits >> 8) & 0xff),fpkexe);
		  break;
		}
	}
	fclose(fpkexe);
	fclose(fpk);
}