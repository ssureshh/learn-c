# Learning - C programming Language
- Book : The C programming Language By Dennis Ritchie and Brian Kernighan
- Goal : Finish all the exercises and try out all the codes give in the book and maybe build a usefull project out with C.

## Repo Structure
- The Folder name xx.yy corresponds to ```xx is chapter``` and ```yy is section```
- inside, main.c is the full example code, followed by mainX.c, are the exercise codes



## To write cleaner C code
- Follow the rules to write a cleaner C code
```bash
# leave a space after starting a comment
do 		= // hello
dont 	= //hello

# when declaring multiple variables or when use of comma is required, leave a space after the comma
do		= var1, var2
dont	= var1,var2

# For functions, start the curly brackets in new line
do		= main()
		  {}

dont	= main() {
		  }

# For conditionals functions, start curly brackets in the same line
do		= for() {
		  }
dont	= for() 
		  {}

# Always leave a space before and after a equal-to sign
do		: a = b
dont	: a=b
		  a= b
		  a =b

# Dont leave spaces in-between of arithmetic expressions
do		= (a+b)*(c+d)
dont	= ( a +b) *(c+ d)

# Dont leave spaces after a conditional function start (for, if, while, do)
do		= for()
dont	= for ()
```

## Projets to try
- [] A network socket based project, maybe a pubsub server+client or a SSH server+client
- [] A program to properly talk with LibUHD and record IQ samples
- [] A GUI based program for simple user inputs, maybe a GUI based app for the above USRP program
- [] A simple signal processing program, with IQ samples.
- [] A terminal Utility
