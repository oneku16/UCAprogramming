// Write a C program to calculate the sum of a maximum of 10 numbers by
// using for loop. Use the break statement to terminate the loop if a negative
// number is entered.



#include <stdio.h>

int maxval, sum, num;

int main(){

    for(int i = 1; i <= 10; i++){

        printf("#%d input: ", i);
        scanf("%d", num);
        // if ( num > 0 ){

        //     break;
        // }
        sum += num;
    }

    printf("result: %d\n", sum);
    return 0;

}