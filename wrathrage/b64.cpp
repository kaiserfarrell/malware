/* mime64 */
/* MIME base64 encoder/decoder by Karl Hahn  hahn@lds.loral.com  3-Aug-94 */
/* modified 30-Sep-94 by Karl Hahn hahn@lds.loral.com: handle multiple
   content */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VACIO ""
#define EOL "\r\n"
#define TRUE 1
#define FALSE 0
#define MAX_SIZE_LINE_B64 75

extern char *buffer64;

char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
                  "0123456789+/";

enum TOKENTYPE { NONE, BLANKS, PUNCT, TAG, NAME, CONTENT };

struct TOKEN {
                char *text;
                int  length;
                int  index;
                enum TOKENTYPE type;
             };


char *fileargs[64], *optargs[64];

struct STATE64 {
                  unsigned long int accum;
                  int               shift;
               };



int encode(char *fileOrigen) {
   int index, shift, save_shift;
   int help_flag = 0, replace_flag = 0, quit = 0;
   FILE *fin, *fout;
   unsigned char blivit;
   unsigned long accum, value;
   char buf[80];
   int firsttime = 1;
   int skipflag = 0;
   int printmsg = 1;
   fin = fopen( fileOrigen, "rb" );
   if ( fin == NULL ) {
		buffer64 = NULL;
		return FALSE;
   }
	strcpy(buffer64,VACIO);
do {
   quit = 0;
   printmsg = 1;
      shift = 0;
      accum = 0;
      index = 0;
      while ( ( !feof( fin ) ) || (shift != 0) ) {
         if ( ( !feof( fin ) ) && ( quit == 0 ) ) {
            blivit = fgetc( fin );
            if ( feof( fin ) ) {
               quit = 1;
               save_shift = shift;
               blivit = 0;
            }
         }
         else {
            quit = 1;
            save_shift = shift;
            blivit = 0;
         }

         if ( (quit == 0) || (shift != 0) ) {
            value = (unsigned long)blivit;
            accum <<= 8;
            shift += 8;
            accum |= value;
         }

         while ( shift >= 6 ) {
            shift -= 6;
            value = (accum >> shift) & 0x3Fl;
            blivit = alphabet[value];

            buf[index++] = blivit;
            if ( index >= MAX_SIZE_LINE_B64 ) {
 				buf[index] = '\r';
				index++;
				buf[index] = '\0';
				strcat( buffer64, buf );
				index = 0;
            }

            if ( quit != 0 )
            {
               shift = 0;
            }
         }
      }

      if ( save_shift == 2 ) {
         buf[index++] = '=';
         if ( index >= MAX_SIZE_LINE_B64 ) {
 			buf[index] = '\r';
			index++;
			buf[index] = '\0';
            strcat( buffer64, buf );
            index = 0;
         }

         buf[index++] = '=';
         if ( index >= MAX_SIZE_LINE_B64 ) {
 			buf[index] = '\r';
			index++;
			buf[index] = '\0';
            strcat( buffer64, buf );
            index = 0;
         }
      }
      else if ( save_shift == 4 ) {
         buf[index++] = '=';
		 if ( index >= MAX_SIZE_LINE_B64 ) {
 			buf[index] = '\r';
			index++;
			buf[index] = '\0';
            strcat( buffer64, buf );
            index = 0;
         }
      }

      if ( index != 0 ) {
 			buf[index] = '\r';
			index++;
			buf[index] = '\0';
			strcat( buffer64, buf );
      }
   fout = 0;
   firsttime = 0;
} while ( !feof( fin ) );

fclose( fin );
return TRUE;
}