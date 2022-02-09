#include <stdio.h>

int num;


int main(){

    scanf("%d",&num);

    switch (num){

        case 7:
            printf("val is 7\n");
            break;
        
        case 8:
            printf("val is 8\n");
            break;

        case 9:
            printf("val is 9\n");
            break;

        default:
            printf("out of range\n");
            break;    
    }

    return 0;
}















