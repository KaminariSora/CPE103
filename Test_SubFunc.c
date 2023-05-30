#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
SubFunc1(int a,int b);
SubFunc2(int x,int y);
int main()
{
    int b,l,d,w,h,san,yot ;
    printf("B = ");
    scanf("%d",&b);
    printf("H = ");
    scanf("%d",&h);
    printf("W = ");
    scanf("%d",&w);
    printf("L = ");
    scanf("%d",&l);
    SubFunc1(b,h);
    SubFunc2(w,l);
    san = SubFunc1(b,h);
    yot = SubFunc2(w,l);
    printf("Triangle = %d",san);
    printf("\nSquare = %d\n",yot);
    system("pause");
}

SubFunc1(int a ,int b)
{
    int k ;
    k = 0.5*a*b ;
    return(k);
}

SubFunc2(int x , int y)
{
    int j;
    j = x*y ;
    return(j);
}