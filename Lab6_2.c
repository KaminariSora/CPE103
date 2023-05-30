#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
void main()
{ int i ;
float fnum[5];
for(i=0 ; i<=4 ;i++)
{   printf("\n input floating number[%d](x.xx) :",i+1);
    scanf("%f",&fnum[i]);}
printf("\n----------------");
for(i=0 ; i<=4 ; i++)
{   printf("\nYour flatting number[%d] = [%f]",i,fnum[i]);}
system("pause");
}//main
