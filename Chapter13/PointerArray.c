#include<stdio.h>

int main(void)
{
	int num1 = 10, num2 = 20, num3 = 30;
	int* arr[3] = { &num1, &num2, &num3 };

	printf("%d \n", *arr[0]);
	printf("%p \n", arr[0]);

	return 0;
}