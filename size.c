#include<stdio.h>




int size(char a[50]) //encryption & decrypt
{						//counts total no. of lines in the file 
FILE* f=fopen(a,"r");
//if (!NULL){printf("Error!");} //optional as we are confirmed of it to be existing
char c;int count=0;
for (c=getc(f);c!=EOF;c=getc(f))
{
	if(c=='\n')
count = count + 1;
}
fclose(f);
return count;
}