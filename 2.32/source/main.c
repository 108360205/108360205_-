#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	float bmi;
	int weight;
	float tall;

	printf("enter you weight and tall: \n");
	scanf_s("%d %f", &weight, &tall);

	bmi = (weight / ((tall/100) *(tall/100) ));

	printf("your bmi is %f\n", bmi);
	printf("underweight: less than 18.5\n");
	printf("normal:      between 18.5 and 24.9\n");
	printf("overweight:  between 25 and 29.9\n");
	printf("obese:       30 or greater\n");
	system("pause");
	return 0;
}