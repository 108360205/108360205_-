#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int money;

	printf("total miles driven per day :\n");
	scanf_s("%d", &num1);
	printf("cost per gallon of gasoline :\n");
	scanf_s("%d", &num2);
	printf("average miles per gallon :\n");
	scanf_s("%d", &num3);
	printf("praking fees per day :\n");
	scanf_s("%d", &num4);
	printf("tolls per day :\n");
	scanf_s("%d",&num5);
	num6 = ((num1 / num3)*num2);
	money = num6 + num4 + num5;
	printf("today spend money %d $\n", money);
	system("pause");
	return 0;
}