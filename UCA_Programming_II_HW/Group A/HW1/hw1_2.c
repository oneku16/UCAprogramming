// Write a program that enters the base and height of a triangle from the user as
// float data type, and calculate its area

#include <stdio.h>

float base, height;

float area(){

    return base * height * 0.5;
}

int main(){

    printf("Enter base and height: ");
    scanf("%f %f",&base, &height);
    printf("Area is: %.3f", area());
    return 0;
}