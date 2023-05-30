#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    char c ;
    FILE *fpt ;
    if ((fpt = fopen("personal.txt","r"))== NULL)
    {
        printf("\n Error can't open/create file \n");
        exit(1);
    }
    while(c != EOF)
    {
        c = getc(fpt);
        printf("%c",c);
    }
    fclose(fpt);
    printf("\n...Read form file ready..!");
    system("pause");
}