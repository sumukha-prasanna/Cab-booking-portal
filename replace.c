#include<stdio.h>
#include<string.h>

// it's to increment/ deduct money into the wallet

int a[100];
void replaceread(int i,int j,int k) // i: line no. of the user name or wall no. corresponding to it
{										//j: total no. of lines
FILE *f;							//k: final wallet amount after deductions
f=fopen("wallet.txt","r");
int r=1;
while(r<=j){
fscanf(f,"%d\n",&(a[r-1]));
r+=1;}
a[i-1]=k;
fclose(f);
}
void replacewrite(int j){
FILE *f1=fopen("wallet.txt","w");
int r=1;
while(r<=j){
fprintf(f1,"%d\n",a[r-1]);
r+=1;}
fclose(f1);
}