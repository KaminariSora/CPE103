#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
void main()
{
    int i , arrVal[5] = {25,456,234,876,543};
    printf("Access Data Array By Pointer \n");
    for (i=0;i<=4;i++)
        printf("\narrVal[%d] = %d at %X",i,*(arrVal + i),(arrVal+i));
    system("pause");
}