// Write a C program that enters from the user three integer numbers and then 
// calculates the maximum of three of them

#include <stdio.h>

int a, b, c;
int maxnum = 0;


int maxval(){

	if((a > b) && (a > c)) maxnum = a;
    else if(b > c)maxnum = b;
    else maxnum = c;

	return maxnum;
}

int main(){

	scanf("%d %d %d", &a, &b, &c);
	printf("%d", maxval());
	
}
