#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num;
	int num1;
	int num2;

	printf("enter integer :\n");
	scanf_s("%d %d", &num,&num1);
	num2 = (num /num1)%2;
	if (num2 == 0)
	{
		printf("%d is a miltiple of %d\n",num,num1);
	}
	if (num2 == 1)
	{
		printf("%d is not a miltiple of %d\n", num, num1);
	}
	system("pause");
	return 0;
}