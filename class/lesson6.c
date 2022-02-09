//  ex 1

// #include <stdio.h>

// int num;


// int main(){

//     scanf("%d",&num);

//     switch (num){

//         case 7:
//             printf("val is 7\n");
//             break;
        
//         case 8:
//             printf("val is 8\n");
//             break;

//         case 9:
//             printf("val is 9\n");
//             break;

//         default:
//             printf("out of range\n");
//             break;    
//     }

//     return 0;
// }

// ________________________________________________________________

// ex 2

#include <stdio.h>

int num1;
int num2;


// int main(){

//     scanf("%d %d", &num1, &num2);

//     switch (num1){

//         case 100:
//             printf("This is part of outer switch: %d\n", num1);

//             switch(num2){
//                 case 200:
//                     printf("This is part of inner switch: %d\n", num2);
//                     break;
//             }
//             break;
//     }
//     return 0;
// }

// ________________________________________________________________

// ex 3

#include <stdio.h>

int num1;
int num2;


int main(){

    scanf("%d %d", &num1, &num2);

    switch (num1){

        case 100:
            printf("This is part of outer switch: %d\n", num1);

            switch(num2){
                case 200:
                    printf("This is part of inner switch: %d\n", num2);
                    break;
            }
            break;
    }
    return 0;
}














