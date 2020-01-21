#include <stdio.h>

int main(void) {

	/*
	String literals
	*/
	printf("%s\n", "This is a string literal.");
	printf("%40s\n", "This is also a string literal.");
	printf("%-40s\n", "This is also a string literal.");

	/*
	Character constants
	*/
	printf("%3c %3c %3c\n", 'x', 'y', 'z');
	printf("%-3c %-3c %-3c\n", 'a', 'b', 'c');

	/*
	Integer constants
	*/
	printf("Five prime numbers: %d %d %d %d %d\n", 3, 5, 7, 11, 13);
	printf("Five prime numbers again: ");
	printf("%3d %5d %7d %11d %13d\n", 3, 5, 7, 11, 13);

	return 0;
}	
