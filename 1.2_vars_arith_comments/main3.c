#include<stdio.h>

// C = (5/9)(f-32)
// Fahrenheit 0-300, increments of 20
int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while(fahr <= upper) {
		celsius = (5.0/9.0)*(fahr-32.0);
		printf("%3.0f\t%6.2f\n", fahr, celsius);
		fahr = fahr+step;
	}
	return 0;
}
