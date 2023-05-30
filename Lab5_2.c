#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int i = 0 , x = 0 ;
    system("cls");
    do
    {
        if(i%5 == 0)
        {
            x++ ;
            printf("%d\n",x);
        }
        i++ ;
    }
    while (i<20);
    printf("\nx=%d",x);
    system("pause");
}