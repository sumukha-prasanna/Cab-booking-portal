#include "size.c"
#include<stdio.h>
#include<string.h>

//to find the line in the file  to which the user
// corresponds to for checking  logging in for decryption.
int line(char a[50]) 
{
char k[50],n[50],p[10],pw[10];
FILE *f=fopen("users.txt","r");
int i=1;
if(f!=NULL){
while(i<=size("users.txt")){
fscanf(f,"%s %s %s %s\n",k,n,p,pw);
for(int i=0;i<strlen(k);i++) //encryption refer.
k[i]-=10;
for(int i=0;i<strlen(n);i++)
n[i]-=11;
for(int i=0;i<strlen(p);i++)
p[i]-=12;
for(int i=0;i<strlen(pw);i++)
pw[i]-=13;
if(strcmp(k,a)==0)return i;
else i+=1; // line ===z in decrypt
}}
return 0;
}