#include <stdio.h>

int main(void) {

	// the old upper limit of an int
	int n = 65535;
	unsigned int un = n;

	printf("signed %d\n", n);
	printf("unsigned %u\n", un);

	/*
	modern computers should be able to handle this
	*/
	un = n + n;
	n = n + n;

	printf("signed %d\n", n);
	printf("unsigned %u\n", un);

	/*
	the int should overflow, and revert to a negative number
	the unsigned int should be fine
	*/
	n = n * n;
	un = un * un;

	printf("signed %d\n", n);
	printf("unsigned %u\n", un);

	return 0;
}
