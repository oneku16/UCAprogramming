// Write a C program that enters 5 positive numbers from the user and then
// calculates the sum and average of them. Use goto statement if the user enters
// a negative number.


#include <stdio.h>

int num, avg, sum = 0;

int input(){
    
    int i = 1;
    while(i<=5){
        START:{

            printf("#%d ", i);
            scanf("%d",num);
            if(num < 0){
                goto START;
            }
            else{
                i++;
                sum += num;
                // goto START;
            }
        }
        goto START;
    }
    return sum;
}

int main(){

    printf("sum: %d: ", input());
    return 0;
}






