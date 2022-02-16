// Write a C program to input three numbers from the user, and use them to
// perform all relational operations, and display the results.


#include<stdio.h>

int a, b, c;


int addition(){

    return a+b;
}

int subtraction(){

    return a-b;
}

int multiplication(){

    return a*b;
}

float division(float a, float b){

    return a/b;
}

int modulus(){

    return a%b;
}

int incrementing(){

    int ans = c;
    ans++;
    return ans;
}

int decrementing(){
    
    int ans = c;
    ans--;
    return ans;
}

int main(){

    printf("Enter a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    
    printf("%d + %d = %d\n", a, b, addition());
    printf("%d - %d = %d\n", a, b, subtraction());
    printf("%d * %d = %d\n", a, b, multiplication());
    printf("%d / %d = %.2f\n", a, b, division(a,b));
    printf("%d %% %d = %d\n", a, b, modulus());
    printf("%d++ -> %d\n", c, incrementing());
    printf("%d-- -> %d\n", c, decrementing());
    return 0;
}