#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct InfStr {
    char company[30] ;
    int year ;
    float cost ;
} ;
int main()
{
    struct InfStr data[3] ;
    int i ;
    float t[3] ;
    strcpy_s(data[0].company, "Computer Company,LTD.") ;
    strcpy_s(data[1].company, "Internet Company,LTD.") ;
    strcpy_s(data[2].company, "Network Company,LTD.") ;
    for (i=0;i<=2;i++)
    {
        printf("Comp.name : %s \n",data[i].company);
        printf("input year(xxxx) :");
        scanf("%d",&data[i].year);
        printf("input Cost(xxxx) :") ;
        scanf("%f",&t[i]);
        data[i].cost = t[i] ;
    }
    printf("\n\n--------Show data------\n") ;
    for(i=0;i<=2;i++)
    {
        printf("Comp.Name : %s\n",data[i].company) ;
        printf("Year : %d\n",data[i].year) ;
        printf("Cost : %f\n\n",data[i].cost) ;
    }
    system("pause");
}