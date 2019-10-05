#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num;
	int num1;
	
	printf("enter integer :\n");
	scanf_s("%d", &num);
	num1 = num % 2;
	if (num1 == 0)
	{
		printf("the integer is even\n");
	}
	if (num1 == 1)
	{
		printf("the integer is odd\n");
	}
	system("pause");
	return 0;
}