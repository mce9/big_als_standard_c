#include <stdio.h>

int main(void) {

	int signedInt = 32767;
	unsigned int unsignedInt = signedInt;

	printf("signed int = %d\n", signedInt);
	printf("unsigned int = %u\n", unsignedInt);
	printf("\n");

	/*
	using the wrong format specifier
	*/
	printf("signed int = %d\n", signedInt);
	printf("unsigned int = %u\n", unsignedInt);
	printf("\n");

	/*
	assign a negative value to the signed int
	*/
	signedInt = -signedInt;
	printf("signed int = %d\n", signedInt);
	// using the wrong format specifer
	printf("signed int = %u\n", signedInt);
	printf("\n");

	/*
	assign a negative number to an unsigned int
	*/
	unsignedInt = -unsignedInt;
	printf("unsigned int = %u\n", unsignedInt);
	printf("signed int = %d\n", signedInt);
	return 0;
}
