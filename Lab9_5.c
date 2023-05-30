#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void SubCount(void) ;
int x =10 ;
int main()
{
    int m ;
    for(m=0 ; m<5 ; m++)
    {
        SubCount();
    }
    printf("\n\n Function Main");
    system("pause");
}
void SubCount (void)
{
    static int s = 1 ;
    int k = 1 ;
    printf("\n Static Variable (s) = %d ",s++);
    printf("\n Auto Variable (k) = %d",k++);
    printf("\n Global Variable (x) = %d",x++);
    printf("\n---------------------\n");
    return ;
}