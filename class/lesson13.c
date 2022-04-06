// ex 1
// ___________________________________________________________
#include <stdio.h>
struct abc1{
    int a;
    int b;

};

struct abc2{
    unsigned int a : 1;
    unsigned int b : 1;

};

int main(){

    printf("size of abc1 %zu\n",sizeof(struct abc1));
    printf("size of abc2 %zu\n",sizeof(struct abc2));

    return 0;
}