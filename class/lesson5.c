// ex 1
// #include <stdio.h>

// int main(){

//     int a;
//     scanf("%d", &a);

//     if (a < 0) printf("a is neg\n");
//     printf("a is: %d\n", a);

//     return 0;
// }

// ________________________________________________________________________
// ex 2
// #include <stdio.h>

// int main(){

//     int a = 10;
//     int b = -5;
//     int c = 0;

//     if (a) printf("True \n");
//     if (b) printf("True \n");
//     if (c) printf("False \n");

//     return 0;
// }

// ________________________________________________________________________
//ex 3
// #include <stdio.h>

// int main(){
//     int a;
//     scanf("%d", &a);
//     if (a < 0)printf("a is less than 0\n");
//     else printf("a is greater than %d\n", a);
//     printf("a is %d", a);
//     return 0;
// }

// ________________________________________________________________________
// ex 4
// #include <stdio.h>

// int main(){

//     int a, b;
//     scanf("%d %d", &a, &b);

//     if(a == b)printf("res: %d = %d", a, b);
//     else if (a > b) printf("res: %d > %d", a, b);
//     else printf("res: %d < %d", a, b);

//     return 0;
// }

// ________________________________________________________________________
// ex 5


#include <stdio.h>

int main(){
    
    int a, b;
    scanf("%d %d", &a, &b);

    if(a >= b){

        if (a == b)printf("res: %d = %d", a, b);
        else printf("res: %d > %d", a, b);
        
    }
    else printf("res: %d < %d", a, b);

    return 0;
}



