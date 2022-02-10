// Write a C program that enters an integer number from the user, and then
// checks if the number is even or odd, by using switch…case statement

#include <stdio.h>
#include <stdlib.h>


int num, remider;


const char* odd_even(){

    remider = abs(num % 2);
    switch(remider){

        case 1:
            return " is odd number\n";
            break;

        case 0:
            return " is even number\n";
            break; 
    }

}

int main(){

    printf("Enter any number: ");
    scanf("%d", &num);

    printf("%d is %s", num, odd_even());
    return 0;
}