// Memory allocation in c

// #include<stdio.h>
// #include<stdlib.h>


// int n, *ptr, sum = 0; 


// int main(){

//     printf("Enter number: ");
//     scanf("%d", &n);


//     ptr = (int*)calloc(n, sizeof(int));

//     if (ptr == NULL){

//         printf("ERROR!\nMemory not allocated!");
//         exit(0);
//     }


//     printf("Enter elemets: ");

//     for (int i = 1; i <= n; i++){

//         scanf("%d", ptr + i);
//         sum += *(ptr + i);
//     }

//     printf("sum = %d\n", sum);

//     free(ptr);
//     return 0;
// }


// ___________________________________________________________________________
// ex 2:


#include<stdio.h>
#include<stdlib.h>


int main(){

    int *ptr, n1, n2;

    printf("Enter size:\n");
    scanf("%d",&n1);

    ptr = (int*)malloc(n1 * sizeof(int));

    printf("Addresses of previously allocated memory:\n");
    for (int i = 1; i <= n1; i++) printf("%u\n", ptr + i);

    printf("\nEnter the new size:\n");
    scanf("%d",&n2);


    ptr = (int*)realloc(ptr, n2 * sizeof(int));
    printf("Addresses of new allocated memory:\n");

    for (int i = 1; i <= n2; i++) printf("%u\n", ptr + i);
    
    free(ptr);
    return 0;
}



















