// Write a C program that enters two integer numbers from the user, and then
// calculates their greatest common division (GCD) by using while loop.

#include <stdio.h>
#include <stdlib.h>


int num1, num2;

int gcd(){

    int ans = abs(num1) > abs(num2) ? abs(num2) : abs(num1);

    while ((num1 % ans) != 0 || (num2 % ans) != 0) {
        ans--;
    }
    return ans;
    
}

int main(){


    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter num2: ");
    scanf("%d",&num2);
    printf("gcd of %d and %d is %d\n",num1,num2,gcd());
    return 0;
}







