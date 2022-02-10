// Write a C program that enters an integer number from the user, and then
// checks if the number is even or odd by using the if…else statement.

#include <stdio.h>

int num;

const char* odd_even(){
    if (num % 2 == 0){
        return "even";
    }
    else{
        return "odd";
    }
}

int main(){

    printf("Enter number: ");
    scanf("%d", &num);
    printf("%d is %s number\n", num, odd_even());
    
    return 0;
}