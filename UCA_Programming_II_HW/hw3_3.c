// Write a C program to input an integer number from the user, print that integer
// in words using switch…case statement.

#include <stdio.h>


int num;

const char* num_to_word(){

    switch (num){

        case 0: 
            return "zero \n";
            break;
        case 1: 
            return "one\n";
            break;
        case 2: 
            return "two\n";
            break;
        case 3: 
            return "three\n";
            break;
        case 4: 
            return "four\n";
            break;
        case 5: 
            return "five\n";
            break;
        case 6: 
            return "six\n";
            break;
        case 7: 
            return "seven\n";
            break;
        case 8: 
            return "eight\n";
            break;
        case 9: 
            return "nine\n";
            break;
        default: return "unknown\n";

    }

}

int main(){

    printf("Enter any num from [0, .., 9]: ");
    scanf("%d", &num);

    printf("%d is %s", num, num_to_word());
    return 0;
}