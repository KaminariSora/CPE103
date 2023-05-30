#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int _SubFunc1();
int main()
{
	printf("\n Message in Function main");
	_SubFunc1();
	printf("\n Returned to Function main\n");
	system("pause");
}

