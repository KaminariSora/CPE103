#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
typedef struct {
    char name[50] ;
    char add[70] ;
    char tel[12] ;
} personalInf ;
personalInf friends ;
FILE *fpt ;
int main()
{
    int i ;
    if((fpt=fopen("personal.txt","w+"))==NULL)
    {
        printf("\nError Can't Open File") ;
        exit(1);
    }
    printf("\n***Recode Your Friends*** \n");
    printf("Type 'END' in name for finished \n");
    for(i=0;i<=4;i++)
    {
        printf("\n\nEnter name your friend :") ;
        gets(friends.name);
        if(strcmpi(friends.name , "END")==0)
        break ;
        printf("\nEnter Address your friend :") ;
        gets(friends.tel);
        fprintf(fpt, "\nName : %s\n\r",friends.name);
        fprintf(fpt,"Address : %s\n",friends.add);
        fprintf(fpt,"Phone Number :%s \n",friends.tel) ;
    }
    fclose(fpt);
    printf("\n..Information ready..!\n") ;
    system("pause");
}