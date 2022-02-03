// Write a C program that enters from the user an integer number, and then 
// calculates its absolute value.

#include <stdio.h>
#include "stdlib.h"

int n;


// without using any libs.
int myabs(int x){ 
    
    if (x < 0) return x * -1;
    else return x;

}
// with inbuilt fucntion abs(num);.
int myabs2(int x){

    return abs(x);
}

int main(){

    scanf("%d", &n);
    printf("%d\n", myabs(n));
    // func 2
    // printf("%d\n", myabs2(n));
    return 0;

}
