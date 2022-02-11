// Write a C program that enters a two-digit number from the user, and then
// displays it with its digits reversed.


#include <stdio.h>

int num;

int reverse(){
    int newnum;
    newnum = (num % 10) * 10;
    newnum += num/10;
    return newnum;
}

int main(){

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("reversed: %d\n", reverse());
    return 0;
}