#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int a,b,c ;
    printf("Input a =");
    scanf("%d",&a);
    printf("Input b =");
    scanf("%d",&b);
    printf("Input c =");
    scanf("%d",&c);
    if(a>=b,a>c)
    {
    	printf("%d\v",a);
    	if (b<c)
    	{
    		printf("%d %d",c,b);
		}
		if(b>=c)
		{
			printf("%d %d",b,c);
		}
	}
	else if(b>=a,b>c)
	{
		printf("%d\v",b);
		if(a>=c)
		{
			printf("%d %d",a,c);
		}
		if(a<c)
		{
			printf("%d %d",c,a);
		}
	}
	else if(c>=a,c>=b)
	{
		printf("%d\v",c);
		if(a>=b)
		{
			printf("%d %d",a,b);	
		}
		if(a<b)
		{
			printf("%d %d",b,a);
		}	
	}	
}
