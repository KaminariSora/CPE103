#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
float SubFunc (float *vpt) ;
int main()
{
    float rfv ,fvar[2] = {2.3 , 5.7};
    rfv = SubFunc(fvar) ;
    printf("\n Value of rfv = %f",rfv);
    system("pause");
}
float SubFunc(float *vpt)
{
    float sfr ;
    sfr = vpt[0] * vpt[1] ;
    return(sfr) ;
}