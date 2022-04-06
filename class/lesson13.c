// // ex 1
// // ___________________________________________________________
// #include <stdio.h>
// struct abc1{
//     int a;
//     int b;

// };

// struct abc2{
//     unsigned int a : 1;
//     unsigned int b : 1;

// };

// int main(){

//     printf("size of abc1 %zu\n",sizeof(struct abc1));
//     printf("size of abc2 %zu\n",sizeof(struct abc2));

//     return 0;
// }

// ex 2
// ___________________________________________________________

// #include <stdio.h>

// struct{

//     unsigned int age : 4;

// } Age;


// int main(){

//     Age.age = 4;

//     printf("sizeof(Age) : %d\n", sizeof(Age));
//     printf("Age.age : %d\n", Age.age);

//     Age.age = 7;
//     printf("Age.age : %d\n", Age.age);

//     Age.age = 8;
//     printf("Age.age : %d\n", Age.age);

//     return 0;
// }

// ex 3
// ___________________________________________________________
// #include <stdio.h>

// int num;

// int main(){


//     FILE *f;

//     f = fopen("./test.txt", "w");

//     if (f == NULL){

//         printf("Error\n");

//     }
//     printf("Enter num:\n");
//     scanf("%d", &num);
//     fprintf(f, "%d", num);
//     fclose(f);


//     return 0;
// }


// ex 3
// ___________________________________________________________
#include <stdio.h>
#include <stdlib.h>

int num;
FILE *f;

int main(){

    if ((f == fopen("./test.txt", "r"))){

        printf("Error\n");
    }
    fscanf(f, "%d", &num);
    printf("%d", &num);
    fclose(f);

    return 0;
}









