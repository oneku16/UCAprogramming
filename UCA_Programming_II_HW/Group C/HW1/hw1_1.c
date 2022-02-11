// Write a program that enters a value x and calculates 2x^4 - 5x^3 – x^2 + 7x.


#include <stdio.h>
#include <math.h>

int x;

int calculate(){

    return (2 * pow(x, 4) - 5 * pow(x, 3) - pow(x, 2) + 7 * x);
}

int main(){

    printf("Enter number: ");
    scanf("%d",&x);
    printf("%d", calculate());
    return 0;
}