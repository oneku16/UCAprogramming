// Write a C program in which you use the keyword extern to declare three
// integer variables a=10, b=20, and c, and one float variable d, and then you
// calculate and print the values c=a+b and d=70.0/3.0.


#include <stdio.h>

extern int a, b, c;
extern float d;

int main(){
    
    int a, b, c;
    float d;
    a = 10;
    b = 20;
    c = a + b;
    d = 70.0 / 3.0;
    printf("c = %d, d = %.3f\n", c, d);
    return 0;
}