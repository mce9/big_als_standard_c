#include <stdio.h>

int main(void) {
	
	printf("%9c ", 'A');
	printf("%9c ", 'B');
	printf("%9c", 'C');
	printf("\n\n");
	printf("%9d ", 200);
	printf("%9d ", 3300);
	printf("%9d", 75000);
	printf("\n");
	printf("%9d ", 2600);
	printf("%9d ", 5400);
	printf("\n");

	printf("%9d %9d %9d\n", 33, 855100, 6);

	return 0;
}
