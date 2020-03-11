#include <stdio.h>

int main(void) {

	float answer;
	answer = 1/3;

	printf("The value of 1/3 is %f\n", answer);
	answer = 1.0/3;

	printf("The value of 1.0/3 is %f\n", answer);
	answer = 1.0/3.0;

	printf("The value of 1.0/3.0 is %f\n", answer);

	return 0;
}
