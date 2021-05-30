/* 
	File	: main.c
   	Author 	: Sureshkumar S <ssureshhkk@gmail.com>
   	Date	: Sat May 29 09:43:11 IST 2021
	Desc	: 1.4_symbolic_constants exercise code of the "The C programming Language" book
*/

#include<stdio.h>

#define LOWER	0
#define	UPPER	300
#define	STEP	20

int main() 
{
	for(int fahr = UPPER; fahr >= LOWER; fahr = fahr-STEP) {
		printf("%3d\t%6.1f\n", fahr, ((5.0/9.0)*(fahr-32)));
	}
	return 0;
}
