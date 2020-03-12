#include <stdio.h>

int main(void) {

	float floatOne = 7.777;
	double doubleOne = 3.777888777;

	printf("floatOne's value is displayed as %.3f with the precision set to three.\n", floatOne);
	printf("floatOne's value displays as %f by default\n", floatOne);
	printf("\n");
	printf("doubleOne's value is displayed by default as %f\n", doubleOne);
	printf("With the precision set to 9 it is displayed as %.9f\n", doubleOne);

	return 0;
}
