// ex 1 __________________________________________

// #include<stdio.h>



// int main(){

//     printf("%s\n", __FILE__);
//     printf("%s\n", __DATE__);
//     printf("%s\n", __TIME__);
//     printf("%d\n", __LINE__);
//     printf("%d\n", __STDC__);
//     return 0;
// }

// ex 2 __________________________________________

// #include<stdio.h>
// #define messenge(a, b)\
//     printf(#a " and " #b ": We love you!\n");

// int main(){
//     messenge(1, 2);

// }



// ex 3 __________________________________________


#include <stdio.h>

#define CONCAT(a, b) a##b


int main(){

    printf("%d", CONCAT(20,20));
    return 0;
}