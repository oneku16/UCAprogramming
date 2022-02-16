// Write a C program that enters a three-digit number from the user, and then
// displays it with its digits reversed.

#include <stdio.h>

int num;

int reversed(){

    int newnum = 0;

    while(num > 0){

        newnum = newnum * 10 + num%10;
        num/=10;
    }
    return newnum;

}

int main(){

    printf("Enter number: ");
    scanf("%d",&num);
    printf("reversed: %d", reversed());
    return 0;
}