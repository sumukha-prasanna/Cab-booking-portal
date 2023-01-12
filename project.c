#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include "wallet.c"
#include "line.c"
#include "dec.c"
#include "calc.c"
#include "password.c"
#include "replace.c"


int w,y,ll;
char name[50],p1[50],p2[50],phno[10],pw[10],ka[50];
void display();
void login();
int random(int h,int l)
{
srand(time(0)); //for getting different value every time (seed value is changed,seed 1 random same value else if false then changes)
int num = (rand() % (h - l + 1)) + l; // lower bound not inclusive to include upper bound add +1.
return num;
}
void signup()
{
walletwrite();

printf("\n\t\t\t\t\t\t\t\t\tEnter a username:");
scanf("%s",ka);
if(line(ka)!=0){printf("\n\t\t\t\t\t\t\t\t\tUsername already taken.");sleep(2);system("cls");signup();}
printf("\n\t\t\t\t\t\t\t\t\tEnter your name:");
scanf("%s",name);
printf("\n\t\t\t\t\t\t\t\t\tEnter your phone number:");
while(1){
char temp[50];
scanf("%s",temp);
if(strlen(temp)!=10){printf("\n\t\t\t\t\t\t\t\t\tPlease enter correct phone number:");continue;}
if(strlen(temp)==10){
long int v;
v=atoi(temp);
if(v==0){printf("\n\t\t\t\t\t\t\t\t\tPlease enter correct phone number:");continue;}}
strcpy(phno,temp);break;
}
password(pw);
encrypt(ka,name,phno,pw);
wri();
sleep(1);
printf("\n\n\t\t\t\t\t\t\t\t\tYou've been signed up. Please wait for the login screen.");
sleep(4); //stdlib.h

login();
}
void login()
{
system("cls"); //stdlib.h
char pas[10],v[50];
printf("\n\t\t\t\t\t\t\t\t\tWELCOME!\n");
printf("\n\t\t\t\t\t\t\t\t\tEnter Username:");
scanf("%s",v);
y=line(v);
ll=size("wallet.txt");
w=walletread(y,ll);
if(y)
{
password(pas);
decrypt(y);
if(strcmp(sss.x[3],pas)==0)display();
else{
printf("\n\n\t\t\t\t\t\t\t\t\tPassword/Account Number is wrong.");
sleep(2);
system("cls");
login();
}}
else{
printf("\n\t\t\t\t\t\t\t\t\tAccount Number does not exist.\n");
sleep(2);
system("cls");
login();
}}
void display()
{
printf("\n\n\t\t\t\t\t\t\t\t\tYou've logged in successfully.\n");


cal();
int *p=calculate(p1,p2);
srand(time(0));
int weather = random(10,1); //both exclusive
if(weather>5)
{
*p+=50;
*(p+1)+=10;
printf("\n\t\t\t\t\t\t\t\t\tIt is raining.The cost will increase by 50rs and the time by 10min.\n");
}
sscanf(sss.x[3],"%d",&w);
int zzz=1;
printf("\n\t\t\t\t\t\t\t\t\tCost of ride will be:%d\n",*p);
while(1){if(*p>w)
{
printf("\n\t\t\t\t\t\t\t\t\tYou do not have enough money in your wallet.Please add.\n");
wallet(&w);zzz+=1; 
}
else if(zzz==1)
{printf("\n\t\t\t\t\t\t\t\t\tYou have enough money in your wallet to book this ride.\n");sleep(2);break;}
else break;}
int o,ot=random(10000,1000);
printf("\n\t\t\t\t\t\t\t\t\tOTP sent.\n");
sleep(2);
printf("\n\t\t\t\t\t\t\t\t\tOTP:%d\n",ot);
while(1){
printf("\n\t\t\t\t\t\t\t\t\tPlease enter the correct otp: ");
scanf("%d",&o);
if(ot==o)
{
system("cls");
printf("\n\n\n\t\t\t\t\t\t\t\t\tCustomer Copy:");
printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\tUsername:%s\n",sss.x[0]);
printf("\n\t\t\t\t\t\t\t\t\tName:%s\n",sss.x[1]);
printf("\n\t\t\t\t\t\t\t\t\tPhone Number:%s\n",sss.x[2]);
printf("\n\t\t\t\t\t\t\t\t\tA cab has been booked from %s to %s.\n",p1,p2);
printf("\n\t\t\t\t\t\t\t\t\tCost of the ride:%d\n",*(p));
printf("\n\t\t\t\t\t\t\t\t\tETA of the ride:%d min\n",*(p+1));
w-=*p;
printf("\n\t\t\t\t\t\t\t\t\tMoney remaining in your wallet:%d\n",w);
replaceread(y,ll,w);
replacewrite(ll);
sleep(10);
system("cls");
exit(0);
}}
}
int main()
{
system("cls");
char c[1];
printf("\n\t\t\t\t\t\t\t\t\tWelcome to our portal!!\n");
sleep(2);
printf("\n\t\t\t\t\t\t\t\t\tDo you want to login or signup?(l/s): ");
while(1)
{
scanf("%s",c);
if(strcmpi(c,"l")==0){login();break;}
if(strcmpi(c,"s")==0){signup();break;}
else printf("\n\t\t\t\t\t\t\t\t\tPlease enter correct choice\n\t\t\t\t\t\t\t\t\t");
}
system("cls");
return 0;
}