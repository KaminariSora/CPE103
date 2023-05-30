#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    static int num[10],odd[10],even[10];
    int i,j=0,k=0;
    static int s=0;
    static int e=0;
    for(i=0;i<=9;i++)
    {
    printf("Enter integer number :");
    scanf("%d",&num[i]);
    }

    printf("********************");

    for(i=0;i<=9;i++)
    {
        if((num[i]%2)!=0)
        {
            odd[j] = num[i];
            j++ ;
            s++;
        }
        else
        {
            even[k] = num[i];
            k++ ;
            e++;
        }
    }
    printf("Even Number :");
    for(k=0;k<e;k++)
    {
        printf("%d",even[k]);
    }
    printf("\nOdd Number :");

    for(j=0;j<s;j++)
    {
        printf("%d",odd[j]);
    }
    return 0;
}