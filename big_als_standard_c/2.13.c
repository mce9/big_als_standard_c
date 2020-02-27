#include <stdio.h>

int main (void) {

	int a = 10, b = 5, c = 4, d = 3, e = 2;

	/*
	Use one percent sign to escape the other
	so that it will display
	*/

	printf("%d %% %d = %d\n", a, b, a % b);
	printf("%d %% %d = %d\n", a, c, a % c);
	printf("%d %% %d = %d\n", a, d, a % d);
	printf("%d %% %d = %d\n", a, e, a % e);

	return 0;
}
