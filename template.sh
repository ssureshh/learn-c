#!/bin/sh

# create a dir with a minimum c file

name=$1
rm -rf $1
mkdir $name
cd $name
cat <<EOT >> main.c
/* 
	File	: main.c
   	Author 	: Sureshkumar S <ssureshhkk@gmail.com>
   	Date	: $(date)
	Desc	: $1 exercise code of the "The C programming Language" book
*/

#include<stdio.h>

int main() 
{
	return 0;
}
EOT
cd ../

