// ex 1

// #include<stdio.h>


// int arr[10];

// void qwe(int a){

//     printf("%d\n", a);
// }


// int main(){

    
//     for(int i=0; i<10; i++){
        
//         arr[i] = i + 1;
//     }
//     for(int i=0; i<10; i++){

//         qwe(arr[i]);
//     }
        
//     return 0;
// }



// ________________________________________________________________
// ex 2

#include<stdio.h>


int arr[10];

void qwe(int a){

    printf("%d\n", a);
}

int main(){

    
    for(int i=0; i<10; i++){
        
        arr[i] = i + 1;
    }
    for(int i=0; i<10; i++){

        printf("%d\n", arr[i]);
    }
        
    return 0;
}