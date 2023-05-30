#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main( )
{
    float R[5][3];
    char op[5]={'+','*','-','/','%'};
    int x ;
    printf("\n Input the firstNumber<x.xx> :");
    scanf("%f",&R[0][0]);
    printf("\n Input the secondNumber<x.xx> :");
    scanf("%f",&R[0][1]);
    for(x=0;x<4;x++)
    R[x+1][0]=R[0][0];
    for(x=0;x<4;x++)
    R[x+1][1]=R[0][1];
    R[0][2]= R[0][0]+R[0][1];
    R[1][2]=R[1][0]*R[1][1];
    R[2][2]=R[2][0]-R[2][1];
    R[3][2]=R[3][0]/R[3][1];
    R[4][2]=(int)R[4][0]%(int)R[4][1];
    for(x=0;x<=4;x++)
    printf("\n%.2f %c %.2f = %.2f",R[x][0],op[x],R[x][1],R[x][2]);
    system("pause");
}//main