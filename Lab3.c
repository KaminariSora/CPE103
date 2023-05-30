#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    float a,b,c ;
    float result,resultA,resultB,resultC,resultD,resultE,finalP,finalM ;
    printf("input a=");
    scanf("%f",&a);
    printf("input b=");
    scanf("%f",&b);
    printf("input c=");
    scanf("%f",&c);
    result = pow(b,2)-(4*a*c);
    //printf("result =%f \n",result);
    resultA = sqrt(result);
    //printf("resultA = %f \n",resultA);
    resultB = -b +resultA ;
    //printf("resultB =%f",resultB);
    resultC = -b -resultA ;
    //printf("resultC =%f",resultC);
    resultD = resultB/2*a ;
    resultE = resultC/2*a ;
    printf("First Answer is = %f \n",resultD);
    printf("Second Answer is = %f \n",resultE);
    system("pause");
}
