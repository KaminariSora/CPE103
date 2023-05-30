#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NAME_SIZE 50
void main()
{   int i , k ;
char st[NAME_SIZE] ;
printf("\n Input your name :");
for(i=0;i<=(NAME_SIZE-1);i++)
{   st[i] = getche();
    k = i ;
    if(st[i]==13) break ;}
printf("\n Your name :");
for(i=0;i<=k;i++)
{   printf("%c",st[i]);}
printf("\n");
system("pause");
}//main