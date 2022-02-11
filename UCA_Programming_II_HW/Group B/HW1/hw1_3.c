// Write a C program that enters the length and width of a rectangle as float
// numbers and calculates its perimeter as float number

#include <stdio.h>


float length, width;

float perimeter(){

    return (2 * (length + width));
}

int main(){

    printf("Enter length and width: ");
    scanf("%f %f", &length, &width);
    printf("Perimeter is %.3f\n", perimeter());
    return 0;   
}

