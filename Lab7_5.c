#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define ROWs 4
void main()
{
    char *names[ROWs];
    char car1[] = "Honda" ;
    char car2[] = "Toyota" ;
    char car3[] = "Nisson" ;
    char car4[] = "Mazda" ;
    names[0]=car1 ;
    names[1]=car2 ;
    names[2]=car3 ;
    names[3]=car4 ;
    printf("\n%s",names[0]);
    printf("\n%s",names[1]);
    printf("\n%s",names[2]);
    printf("\n%s",names[3]);
    printf("\n----------------------\n");
    printf("\n input Character[a] : ");
    names[2][4] = getche();
    printf("\n%s\n",names[2]);
    system("pause");
}