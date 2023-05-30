#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int x[10] ;
    int i,n=0,m=0 ;
    int odd[10],even[10] ;
    for(i=0;i<10;i++)
    {
        printf("Input Your number :");
        scanf("%d",&x[i]);
    }
    for(i=0;i<10;i++)
    {
        if(x[i]%2==0)
        {
            even[n] = x[i];
            n++ ;
        }
        else
        {
            odd[m] = x[i];
            m++ ;
        }     
    }
     printf("Even number :");
        for(n=0;n<5;n++)
        {
            printf("%d ",even[n]);
        }
    printf("\nOdd number :");
        for(m=0;m<5;m++)
        {
            printf("%d ",odd[m]);
        }
    printf("\n");
    system("pause");
}