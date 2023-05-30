#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void SubFunc1(void) ;
void SubFunc2(void) ;
void SubFunc3(void) ;
void main()
{
    printf("\n Message in Main Function");
    SubFunc1() ;
    SubFunc3() ;
    printf("\n Return Main Function") ;
    system("pause");
}
void SubFunc1(void)
{
    printf("\n Message in SubFunc1");
    return ;
}
void SubFunc2(void)
{
    printf("\n Message on SubFunc2");
    return ;
}
void SubFunc3(void)
{
    SubFunc2();
    printf("\n Message on SubFunc3");
    return ;
}