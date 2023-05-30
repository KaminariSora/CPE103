#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int i=0 , x=0;
    while(i <20)
    {
        if(i%5 == 0)
        {
            x += i ;
            printf("%d\n",x);
        }
        ++i ;
    }
    printf("\nx =%d",x);
    system("pause");
}