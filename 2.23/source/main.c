#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int arr[3] = {0,1,2};//[]�̭��O�j�p3�N�O��3�ӡA�᭱�N��}�C�Ů�W�١C
	int temp;

	printf("enter three integer :\n");
	scanf_s("%d%d%d", &arr[0], &arr[1], &arr[2]);

	for (int i = 0; i < 3; i++) {
		int j = i;
		while (j > 0 && arr[j - 1] > arr[j]) {
			int temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
			j--;
		}
	}
	printf("greate integer:%d\n",arr[2]);
	printf("small integer:%d",arr[0]);
	system("pause");
	return 0;
}