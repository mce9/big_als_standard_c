#include <stdio.h>

int main(void) {

	/*
	format specifier for an integer is 7
	*/
	printf("Lucky number %d\n", 7);

	/*
	You can pass a mathematical expression
	as an argument to the printf() function
	*/
	printf("Five plus ten is %d\n", 5+10);

	/*
	the format specifier for a character is %c
	*/
	printf("The first letter in the alpabet is %c\n", 'A');

	/*
	Each extra argument passed must have a corresponding
	conversion specifier
	*/
	printf("%c%d is a brand of steak sauce.\n", 'A', 1);

	return 0;
}
