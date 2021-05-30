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

	celsius = lower;
	printf("Celsius to Fahrenheit Table\n");
	printf("---------------------------\n");
	printf("Celsius\tFahr\n");
	printf("-------\t----\n");
	while(celsius <= upper) {
		//fahr = (9.0/5.0)*celsius+32;
		fahr = ((celsius*9.0)/5)+32;
		printf("%3.0f\t%6.2f\n", celsius, fahr);
		celsius = celsius+step;
	}
	return 0;
}
