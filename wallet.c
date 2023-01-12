#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

void wallet(int *w) //wallet amt
{
int m;
printf("\n\t\t\t\t\t\t\t\t\tWallet:Rs.%d\n",*w);
char c[1];
printf("\t\t\t\t\t\t\t\t\tDo you want to add money?(y/n):");
scanf("%s",c);
if(strcmp(c,"y")==0){
for(;;){
printf("\t\t\t\t\t\t\t\t\tHow much money do you want to add?");
scanf("%d",&m);
if(m>1500)
{printf("\t\t\t\t\t\t\t\t\tYou cannot add more than 1500.\n");}
else
{printf("\t\t\t\t\t\t\t\t\tMoney added\n");*w+=m;break;}}
}
else
{printf("\t\t\t\t\t\t\t\t\tRide Cancelled due to low Balance!!");sleep(5);

exit(0);}
}

int walletread(int i,int j)
{
FILE *f=fopen("wallet.txt","r");
int r=1;
while(r<=j){
int w;
fscanf(f,"%d\n",&w);
if(r==i)return w;
else r+=1;}
fclose(f);
}

void walletwrite()
{
FILE *f=fopen("wallet.txt","a");
fprintf(f,"%d\n",0);
fclose(f);
}

