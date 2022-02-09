// Write a C program find the largest among three numbers by using the if
// statement.

#include <stdio.h>


int num1, num2, num3, maxval = 0;

int max_finder(num1, num2, num3){
    
    if (num1 >= num2 && num1 >= num3){
        maxval = num1;
    } 
    else if (num2 >= num3 && num2 >= num1){ 
        maxval = num2;
    }
    else{
        maxval = num3;
    }
    return maxval;
}
int main(){

    printf("Enter num1, num2 and num3: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("max val: %d\n", max_finder(num1, num2, num3));

    return 0;
}