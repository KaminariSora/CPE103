#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int i=1,x=0 ;
    system("cls");
    while(i<10)
    {
        if(i%5 == 0)
        {
            printf("%d\n",x);
        
        }
        else
        x+=i ;
        ++i ;
    }//while loop
    printf("\n x =%d",x);
    system("pause");
}