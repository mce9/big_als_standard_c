#include <stdio.h>

int main(void) {

	int x = 0, y = 0;

	printf("x = %d\n", ++x);
	printf("y = %d\n", y++);
	printf("but now y = %d\n", y);
	printf("Now x = %d\n", x++);
	printf("and y = %d\n", ++y);

	return 0;
}
