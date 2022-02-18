// Write a C program to print numbers from 10 to 19 using do…while loop.

#include <stdio.h>

int num = 10;

int main(){

    do
    {
        printf("%d\n", num);
        num++;
    } while (num <= 19);
    
    return 0;
}