// Write a C program that prints on the screen the following picture "F"

#include <stdio.h>


void printer(){

    for(int i=0; i < 6; i++) printf("#");
    printf("\n");

    for(int i=0; i < 6; i++){
        if (i == 2){

            for(int j=0; j <4; j++)printf("#");
        }
        printf("#\n");
    }
}

int main(){

    printer();
    return 0;

}
