// Write a C program to declare a variable of type integer and assign the value 4
// to it, and then you perform pre-increment and post-increment of this variable,
// and display the value of the variable before and after increment


#include <stdio.h>

int num;

int preincrement(int val) {

    return (++val);
}

int postincrement(int val){

    return (val++);
}

int main(){

    num = 4;

    printf("Before preincrement: %d\nAfter preincrement: %d\n", num, preincrement(num));
    printf("Before postincrement: %d\nAfter postincrement: %d\n", num, postincrement(num));
    return 0;
}