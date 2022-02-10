// Write a C program that enters from the user (0-6) numbers and prints the day
// name (Sunday-Saturday) according to the number, by using switch…case
// statement.

#include <stdio.h>

int num;

const char * day(){
    switch (num){
        case 0: 
            return "Sunday\n";
            break;
        case 1: 
            return "Monday\n";
            break;
        case 2: 
            return "Tuesday\n";
            break;
        case 3: 
            return "Wednesday\n";
            break;
        case 4: 
            return "Thursday\n";
            break;
        case 5: 
            return "Friday\n";
            break;
        case 6: 
            return "Saturday\n";
            break;
        default: 
            return "Unknown\n";
    }
}

int main(){

    printf("Enter number: ");
    scanf("%d", &num);

    printf("%d is %s\n", num, day());

    return 0;
}