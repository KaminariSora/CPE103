#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int i,j,x=0 ;
    system("cls");
    for(i=0;i<5;i++)
    {
        printf("------\n");
        for(j=0;j<i;j++)
        {
            x += (i+j-1);
            printf("%d\n",x);
        }
    }//for loop
    printf("\n x =%d",x);

    system("pause");
}