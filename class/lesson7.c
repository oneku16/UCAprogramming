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

#include<stdio.h>

int num, cnt, sum = 0;

int main(){

    printf("Enter num: ");
    scanf("%d", &num);

    for(cnt=1; cnt <= num; cnt++){

        sum += cnt;
    }

    printf("sum: %d\n", sum);
    return 0;
}




