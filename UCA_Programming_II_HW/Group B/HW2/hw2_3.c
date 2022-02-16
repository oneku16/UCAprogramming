// Write a C program to declare two variables m and n of type integer and assign
// the values 40 and 80 to them, respectively, then you perform bitwise
// operations and display output in decimal format.

#include <stdio.h>

int num1, num2;

int and_operator(){

    return (num1&num2);
} 

int or_operator(){

    return (num1|num2);
}

int not_operator(){

    return (~num1);
}

int xor_operator(){

    return (num1 ^ num2);
}

int main(){

    num1 = 5;
    num2 = 80;

    printf("%d & %d -> %d\n",num1, num2, and_operator());
    printf("%d | %d -> %d\n", num1, num2, or_operator());
    printf("~%d -> %d\n", num1, not_operator());
    printf("%d ^ %d -> %d\n", num1, num2, xor_operator());
    return 0;
}