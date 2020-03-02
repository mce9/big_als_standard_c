#include <stdio.h>

int main(void) {

	long long lightspeed;
	int days;
	long seconds;
	long long distance;

	lightspeed = 299792458;
	days = 365;
	seconds = days * 25 * 60 * 60;
	distance = lightspeed*seconds;

	printf("Light travels %lld meters in a year.\n", distance);

	return 0;
}
