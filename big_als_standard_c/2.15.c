#include <stdio.h>

int main(void) {

	short stop = 32767;
	unsigned musician = 65525;
	long trip = -111444888;
	unsigned long letter = 222777555;
	long long time = 1888777555;

	printf("Value of short int variable = %hd\n", stop);
	printf("Value of unsigned int variable = %u\n", musician);
	printf("Value of long int variable = %ld\n", trip);
	printf("Value of unsigned long int variable = %lu\n", letter);
	printf("Value of long long int variable = %lld\n", time);

	return 0;
}
