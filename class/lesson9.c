// ex1:


// #include<stdio.h>

// int main(){

//     printf("try to remove line #4\n");
//     return 0;
// }


// _________________________________________________________________________
// ex2:



// #include <stdio.h>
// #include <math.h>

// float num, root;

// int main(){
//     printf("Enter any number: ");
//     scanf("%f",&num);
//     root = sqrt(num);
//     printf("Square root of %.2f = %.2f\n", num, root);
//     printf("Mr. Ayman: remove line #19 and run\n");
//     return 0;
// }

// _________________________________________________________________________
// ex3:



// #include <stdio.h>
// #include <stdlib.h>

// float num, absval;

// int main(){
//     printf("Enter negative number: ");
//     scanf("%f",&num);
//     absval = abs(num);
//     printf("abs of %.2f = %.2f\n", num, absval);
//     printf("Mr. Ayman: remove line #19 and run\n");
//     return 0;
// }


// _________________________________________________________________________
// ex4:



// #include <stdio.h>

// int num1, num2;

// int getMax(){

//     return num1 > num2 ? num1 : num2; 
// }

// int main(){

//     // scanf("%s")
//     return 0;
// }



// #include <stdio.h>

// int addition(int a, int b);

// int num1, num2, sum;

// int main(){

//     printf("Enter num1 and num2: ");
//     scanf("%d %d", &num1, &num2);

//     sum = addition(num1, num2);

//     printf("sum of %d and %d is %d", num1, num2, sum);
//     return 0;
// }

// int addition(int a, int b){

//     int res;
//     res = a + b;
    
//     return res;
// }


// _________________________________________________________________________
// ex5:

// #include <stdio.h>

// int num1, num2;

// int getMax(){

//     return num1 > num2 ? num1 : num2; 
// }

// int main(){

//     // scanf("%s")
//     return 0;
// }



// #include <stdio.h>

// int addition(int a, int b){

//     int res;
//     res = a + b;
    
//     return res;
// }

// int num1, num2, sum;

// int main(){

//     printf("Enter num1 and num2: ");
//     scanf("%d %d", &num1, &num2);

//     sum = addition(num1, num2);

//     printf("sum of %d and %d is %d", num1, num2, sum);
//     return 0;
// }

// _________________________________________________________________________
// ex5:

#include <stdio.h>

int square(int a){

    
    return a*a;
}

int num1;

int main(){

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("square of %d is %d", num1, square(num1));
    return 0;
}