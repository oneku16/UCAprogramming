// Write as C program that enters a float number from the user and calculates its
// cube by using the multiplication operator.

#include <stdio.h>

int num;

int power(){

    return num * num * num;
}

int main(){

    printf("Enter number: ");
    scanf("%d",&num);
    printf("%d\n", power());
    return 0;
}