#include <stdio.h>

int main(void) {

	int num1;
	int num2;

	num1 = 144;
	num2 = 2;

	printf("num1 = %d and num2 = %d\n", num1, num2);

	num1 /= num2;

	printf("num1 /= num2:\n");
	printf("num1 = %d and num2 = %d\n", num1, num2);

	num1 -= 1;
	num2 += num1;

	printf("num1 -= and num2 += 1:\n");
	printf("num1 = %d and num2 = %d\n", num1, num2);

	num1 += num2;

	printf("num1 += num2:\n");
	printf("num1 = %d and num2 = %d\n", num1, num2);

	return 0;
}
