// loops

// ______________________________________________________________________
// ex 1

// #include <stdio.h>

// int a = 10;

// int main(){

//     while(a < 20){

//         printf("val of a: %d\n", a);
//         a++;
//         if (a > 15){
//             break;
//         }
//     }

//     return 0;
// }


// ______________________________________________________________________
// ex 2


// #include <stdio.h>

// int num = 10;

// int main(){

//     while(num < 20){

//         while(num < 20){
//             printf("val of a: %d\n", num);
//             num++;
//             if (num > 15){

//                 break;
//             }
//         }
//         printf("val of a: %d\n", num);
        
        
//     }
//     return 0;
// }




// ______________________________________________________________________
// ex 3


// #include <stdio.h>

// int a = 10;

// int main(){

//     do
//     {
//         if (a == 15){

//             a = a + 1;
//             continue;
//         }
//         printf("val of a: %d\n", a);
//         a++;
//     } while (a < 20);
    
//     return 0;
// }



// ______________________________________________________________________
// ex 4


// #include <stdio.h>

// int a = 10;

// int main(){

//     do
//     {
//         do
//         {
//             if (a == 16){

//                 a = a + 1;
//                 continue;
//             }
//             printf("val of a: %d\n", a);
//             a++;
//         } 
//         while (a < 13 && a < 18);
        
        
//     } while (a < 20);
    
//     return 0;
// }




// ______________________________________________________________________
// ex 5 goto


#include <stdio.h>


int num = 10;

int main(){

    LOOP: do
    {
        if(num == 15){
            num++;
            goto LOOP;
        }
        printf("val of a: %d\n", num);
        num++;
    } while (num < 20);
    

    return 0;
}


