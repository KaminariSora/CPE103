#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main ()
{
	int press;
	printf("Press (1,2,3,4,5) : ");
	scanf("%d",&press);
	switch(press)
	{
		case 1 :
			printf("Press first = %d\n",press);
			break ;
		case 2 :
			printf("Press second =%d\n",press);
			break ;
		case 3 :
			printf("PRess third =%d\n",press);
			break ;
		case 4 :
			printf("Press forth = %d\n",press);
			break ;
		case 5 :
			printf("Press fifth = %d\n",press);
			break ;
		default :
			printf("Press other key = %d\n",press);	
	}
	printf("End of program");
	system("pause");
}//end of main program
