#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int numbers;
    printf("Input numbers=");
    scanf("%d",&numbers);
    if (numbers <= 9)
    {
    	printf("\ninterval value is 0-9\n");
	}
	if (numbers >9 && numbers<=19)
	{
		printf("\ninterval value is 10-19\n");
	}
	if (numbers >19 && numbers <=29)
	{
		printf("\ninterval value is 20-29\n");
	}
	if (numbers >29 && numbers <=39)
	{
		printf("\ninterval value is 30-39\n");
	}
	if (numbers >39 && numbers <=49)
	{
		printf("\ninterval value is 40-49\n");
	}
	if (numbers >49)
	{
		printf("\nnot in interval value\n");
	}
	system("pause");
}
