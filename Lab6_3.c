#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define ROW 0
#define COL 12
void main()
{   char ch[3][13]={{'*','I','n','t','r','o','d','u','c','t','i','o','n'},
{'A','r','r','a','y','V','a','r','i','a','b','l','e'},
{'B','y','_','B','o','r','l','a','n','d','_','c','*'}};
int i,j ;
for(i=0;i<=ROW;i++)
{   printf("\n");
    for(j=0;j<=COL;j++)
        printf("%c",ch[i][j]);
}//for 1
system("pause");
}//main