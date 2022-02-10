// Write a C program that enters an integer number from the user, and then
// checks if it is divisible by 5.

#include <stdio.h>

int num;

const char * div5(){
    if (num % 5 == 0){
        return "is divisible by 5";
    }
    else{
        return "is not divisible by 5";
    }
}

int main(){

    printf("Enter number: ");
    scanf("%d",&num);
    printf("%d %s\n", num, div5());

    return 0;
}