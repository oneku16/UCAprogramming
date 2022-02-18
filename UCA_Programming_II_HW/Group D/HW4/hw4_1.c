// Write a C program that enters an integer number from the user, and then
// calculates its factorial by using a loop


#include<stdio.h>

int num;

int factorial(){

    int result = 1;

    for(int i = 1; i <= num; i++){

        result *= i;
    }
    return result;
}


int main(){

    printf("Enter number: ");
    scanf("%d", &num);
    printf("factorial of %d is %d\n", num, factorial());
    return 0;
}




