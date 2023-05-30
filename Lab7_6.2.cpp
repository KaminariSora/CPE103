#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int n,t,**p ;
    n = 45 ;
    t= &n ;
    p= &t ;
    printf("Pointer t to n = %d",*t);
    printf("Pointer to Pointer p at t = %d",**p);
    printf("Data of n =%d\n",n);
    system("pause");
}
