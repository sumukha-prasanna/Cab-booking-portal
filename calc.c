#include<stdio.h>
#include "algorithm.c"
#include<string.h>


int *calculate(char *p1,char *p2) // Destination ptr, Pick up ptr
{


static int a[2];
int n1,n2,c,t;
while(1){
printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tEnter the number of the place you are going to(destination):\n");
printf("\t\t\t\t\t\t\t\t\t1.Banashankari\n");
printf("\n\t\t\t\t\t\t\t\t\t2.Bannerghatta\n");
printf("\n\t\t\t\t\t\t\t\t\t3.Electronic City\n");
printf("\n\t\t\t\t\t\t\t\t\t4.Whitefield\n");
printf("\n\t\t\t\t\t\t\t\t\t5.KR Puram\n");
printf("\n\t\t\t\t\t\t\t\t\t6.Majestic\n");
printf("\n\t\t\t\t\t\t\t\t\t Enter Key::");
scanf("%d",&n2);
switch (n2)
{case 1:strcpy(p2,"Banashankari");break;
case 2:strcpy(p2,"Bannerghatta");break;
case 3:strcpy(p2,"Electronic City");break;
case 4:strcpy(p2,"Whitefield");break;
case 5:strcpy(p2,"KR Puram");break;
case 6:strcpy(p2,"Majestic");break;
default:continue;}break;}
while(1){
printf("\n\t\t\t\t\t\t\t\t\tEnter the number of the place at which you want to be picked up(Pick up place):\n");
printf("\t\t\t\t\t\t\t\t\t1.Banashankari\n");
printf("\n\t\t\t\t\t\t\t\t\t2.Bannerghatta\n");
printf("\n\t\t\t\t\t\t\t\t\t3.Electronic City\n");
printf("\n\t\t\t\t\t\t\t\t\t4.Whitefield\n");
printf("\n\t\t\t\t\t\t\t\t\t5.KR Puram\n");
printf("\n\t\t\t\t\t\t\t\t\t6.Majestic\n");
printf("\n\t\t\t\t\t\t\t\t\t Enter Key::");
scanf("%d",&n1);
switch (n1)
{case 1:strcpy(p1,"Banashankari");break;
case 2:strcpy(p1,"Bannerghatta");break;
case 3:strcpy(p1,"Electronic City");break;
case 4:strcpy(p1,"Whitefield");break;
case 5:strcpy(p1,"KR Puram");break;
case 6:strcpy(p1,"Majestic");break;
default: continue;}break;
}
c=dist[n1-1][n2-1]*70;//cost
t=dist[n1-1][n2-1]*8;//time
a[0]=c;
a[1]=t;
system("cls");
return a; //array with cost & time
}