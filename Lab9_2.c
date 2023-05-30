#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
float SubCal(int par1 , int par2) ;
void main()
{
    int x, y ;
    float result ;
    printf("\n input integer Number_1 :") ;
    scanf("%d",&x);
    printf("\n Input integer Number_2 :") ;
    scanf("%d",&y) ;
    result = SubCal(x , y);
    printf("\n Result form SubCal = %f ",result) ;
    system("pause");
}
float SubCal(int par1 , int par2)
{
    float subresult ;
    printf("\n parameters in SubCal are %d, %d",par1 , par2) ;
    subresult = (float)par1 / (float)par2 ;
    return(subresult);
}