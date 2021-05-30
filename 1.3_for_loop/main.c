/* 
	File	: main.c
   	Author 	: Sureshkumar S <ssureshhkk@gmail.com>
   	Date	: Sat May 29 09:35:36 IST 2021
	Desc	: 1.3_for_loop exercise code of the "The C programming Language" book
*/

#include<stdio.h>

int main() 
{
	for(int fahr = 0; fahr <= 300; fahr = fahr+20) {
		printf("%3d\t%6.1f\n", fahr, ((5.0/9.0)*(fahr-32)));
	}
	return 0;
}
