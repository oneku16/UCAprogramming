// Write a C program that enters from the user two long integers, and then
// calculates their absolute values.


#include <stdio.h>
#include <stdlib.h>

long long int num1, num2;

int main(){

    printf("Enter num1: ");
    scanf("%lld",&num1);
    printf("Enter num2: ");
    scanf("%lld",&num2);
    printf("absolute value of %lld is %lld\n", abs(num1));
    

    return 0;
}
