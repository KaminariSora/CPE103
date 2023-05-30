#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    char aName[30] = "Visual C++ Programming" ;
    char *pName = "String Message in pointer" ;
    char *pt ;
    printf("Access data in Array by pointer\n\n");
    pt = aName ;
    printf("Data in Array = %s \n",pt);
    printf("Data in Array = %S \n",pt+3);
    printf("-------------------------------\n");
    printf("Access data in Pointer by pointer \n\n");
    pt = pName ;
    printf("Data in POinter = %s \n",pt);
    printf("Data in Pointer = %s \n",pt+6);
    system("pause");
}