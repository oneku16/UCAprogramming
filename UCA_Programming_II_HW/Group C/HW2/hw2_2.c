//Write a C program in which you use the keyword const to define two
//integer constants LENGTH = 10 and WIDTH = 5, and a character constant
//NEWLINE = '\n', and then you define an integer variable area and print its
//value, where the value of the variable area is given by: area = LENGTH
//* WIDTH, then you print the value of the constant NEWLINE.


#include<stdio.h>


const int LENGTH = 10, WIDTH = 5;
const char NEWLINE = '\n';

int main(){
		
	printf("area: %d%c", LENGTH * WIDTH, NEWLINE);
	return 0;
}
