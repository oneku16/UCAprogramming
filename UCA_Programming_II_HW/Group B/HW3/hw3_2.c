// Write a C program to calculate the number of days in a month by using
// switch…case statement.


#include <stdio.h>

int num; 

const char * month(){

    switch (num){

        case 1:
            return "January\n";
            break;
        
        case 2:
            return "February\n";
            break;

        case 3:
            return "March\n";
            break;

        case 4:
            return "April\n";
            break;
        
        case 5:
            return "May\n";
            break;

        case 6:
            return "June\n";
            break;

        case 7:
            return "July\n";
            break;
        
        case 8:
            return "August\n";
            break;

        case 9:
            return "September\n";
            break;

        case 10:
            return "October\n";
            break;

        case 11:
            return "November\n";
            break;

        case 12:
            return "December\n";
            break;
        default:
            return "unknown";

    }
}

int main(){

    printf("Enter num [1, .., 12]: ");
    scanf("%d", &num);
    printf("%d is %s", num, month());
    return 0;
}