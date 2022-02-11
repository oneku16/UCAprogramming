// Write a C program that enters the radius of a circle as integer number, and
// calculates its perimeter and area as float numbers.

#include<stdio.h>
#include<math.h>

int radius;

float area(){

    return (M_PI * pow(radius, 2));
}
float perimeter(){

    return (2 * M_PI * radius);
}

int main(){

    printf("Enter radius: ");
    scanf("%d",&radius);
    printf("area is %.4f\nperimetr is %.4f\n",area(), perimeter());
    return 0;
}
