// loop

// ex 1
// #include<stdio.h>

// int main(){

//     // here u can use postincrement and increment no difference
//     for(int i=1; i <= 10; i++){

//         printf("%d ", i);
//     }
//     return 0;
// }


// ______________________________________________________________________
// ex 2

// #include<stdio.h>

// int num, cnt, sum = 0;

// int main(){

//     printf("Enter num: ");
//     scanf("%d", &num);

//     for(cnt=1; cnt <= num; cnt++){

//         sum += cnt;
//     }

//     printf("sum: %d\n", sum);
//     return 0;
// }

// ______________________________________________________________________
// ex 3


// #include <stdio.h>

// int num;

// int main(){


//     int i = 1;

//     while(i <= 5){

//         printf("%d\n",i);
//         i++;
//     }

//     return 0;
// }


// ______________________________________________________________________
// ex 4

// #include <stdio.h>

// double num, sum = 0;

// int main(){
//     do
//     {
//         printf("Enter a num: ");
//         scanf("%lf",&num);
//         sum += num;
//     } while (num != 0.0);

//     printf("sum = %.3f\n",sum);
    
//     return 0;
// }


// ______________________________________________________________________
// ex 5

#include <stdio.h>


int main(){

    for(int i=0; i < 2; i++){

        for(int j=0; j <4; j++){

            printf("%d, %d\n", i, j);
        }
    }
    return 0;
}




