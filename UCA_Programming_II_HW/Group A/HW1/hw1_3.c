// Write a C Program that enters the height, width, and depth of a cube and
// calculates its volume.


#include <stdio.h>

float height, width, depth;

float volume(){

    return height * width * depth; 
}

int main(){

    printf("Enter height, width and depth of cube: ");
    scanf("%f %f %f", &height, &width, &depth);
    printf("volume: %.3f", volume());
}