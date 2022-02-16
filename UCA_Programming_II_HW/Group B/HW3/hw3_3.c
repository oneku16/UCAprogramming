// Write a C program to input an integer number from the user and print if it is
// multiple by 7.


#include <stdio.h>

int num;

const char *checker(){

    if (num % 7 == 0){

        return "divisible!\n";
    }
    else{

        return "not divisible!\n";
    }
}

int main(){

    printf("Enter num: ");
    scanf("%d",&num);
    printf("%d is %s\n", num, checker());
    return 0;
}