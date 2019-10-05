#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	int num,y,x;
	y = 2;
	x = 3;
	printf("number  square  cube  \n");
	for ( num=1 ; num < 4 ; num++ )
	{
		printf("%d       %d       %d\n",num,num*num,num*num*num);
	}
	for (num = 4; num < 10; num++)
	{
		printf("%d       %d      %d\n", num, num*num, num*num*num);
	}
	system("pause");
	return 0;

}