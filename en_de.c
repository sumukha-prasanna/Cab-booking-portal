#include<stdio.h>
#include<math.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
#include<time.h>
#include "structure.h"

void encrypt(char k[50],char n[50],char p[10],char pw[10]) //encryption file
{
strcpy(sss.x[0],k);
strcpy(sss.x[1],n);
strcpy(sss.x[2],p);
strcpy(sss.x[3],pw);
for(int i=0;i<strlen(sss.x[0]);i++) //User_ID
sss.x[0][i]+=10;
for(int i=0;i<strlen(sss.x[1]);i++)//User_Name
sss.x[1][i]+=11;
for(int i=0;i<strlen(sss.x[2]);i++) //User_no.
sss.x[2][i]+=12;
for(int i=0;i<strlen(sss.x[3]);i++) //User_password
sss.x[3][i]+=13;
}
void wri()
{
FILE *f=fopen("users.txt","a");
fputs(sss.x[0],f);
fputs(" ",f);
fputs(sss.x[1],f);
fputs(" ",f);
fputs(sss.x[2],f);
fputs(" ",f);
fputs(sss.x[3],f);
fputs("\n",f);
fclose(f);
}