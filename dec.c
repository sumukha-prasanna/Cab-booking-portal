#include<stdio.h>
#include "en_de.c"
#include<string.h>


void decrypt(int i)// decryption file 
{
int z=1;
char k[50],n[50],p[10],pw[10];
FILE *f;
f=fopen("users.txt","r");
while(1){
fscanf(f,"%s %s %s %s\n",k,n,p,pw);
if(z==i){
strcpy(sss.x[0],k);
strcpy(sss.x[1],n);
strcpy(sss.x[2],p);
strcpy(sss.x[3],pw);
for(int j=0;j<strlen(sss.x[0]);j++) //refer encrypt
sss.x[0][j]-=10;
for(int j=0;j<strlen(sss.x[1]);j++)
sss.x[1][j]-=11;
for(int j=0;j<strlen(sss.x[2]);j++)
sss.x[2][j]-=12;
for(int j=0;j<strlen(sss.x[3]);j++)
sss.x[3][j]-=13;break;}
else z+=1;}// for line function
fclose(f);
}