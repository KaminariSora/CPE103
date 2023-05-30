#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int *nPt , nVal = 200 ;
    float *fPt , fVal = 5.67 ;
    char *cPt , cVal = 'Z' ;
    nPt = &nVal ;
    fPt = &fVal ;
    cPt = &cVal ;
    printf("Address of nVal = %X , Data by nPt = %d",nPt , *nPt);
    printf("\nAddress of fVal = %X , Data by fPt = %.2f",fPt,*fPt);
    printf("\nAddress of cVal = %X , Data by cPt = %c\n",cPt,*cPt);
    system("pause");
}