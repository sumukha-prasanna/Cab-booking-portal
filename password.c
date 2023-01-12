#include<stdio.h>
#include<conio.h>

void password(char password[10])
{
printf("\t\t\t\t\t\t\t\t\tEnter Password:\n\t\t\t\t\t\t\t\t\t");
int p=0;
do{
password[p]=getch();
if(password[p]!='\r'){
printf("*");
}
p++;
}while(password[p-1]!='\r');// '\r' corresponds to enter key our set convention for reading 
password[p-1]='\0';
}
