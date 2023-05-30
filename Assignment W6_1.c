#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int x[6];
    int i,j,k,s,y ;
    do
    {
        printf("%d",y);
        scanf("%d",&x[y]);
        i++ ;
    }while(i<=0);
    while(!(x[1]>x[2]>x[3]>x[4]>x[5]))
    {
        for(j=0;j<=4;j++)
        {
            k = j+1 ;
            if(x[j]<x[k])
            {
             s = x[j] ;
             x[j] = x[k] ;
             x[k] = s ;       
            }
        }
    j=0 ;
    }
    while(y<=5)
    {
        printf("\n%d\n",x[y]);
        y++ ;
    }
}