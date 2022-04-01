#include<stdio.h>


struct Cash{
    
    char product[100];
    int price;
    int total_price;

};

void buy_product(struct Cash *i){
    printf("What do you want to buy?:\n");
    gets(i -> product);

    printf("What is the price of %s?:\n",i -> product);
    scanf("%d", &i -> price);

    i -> total_price += i -> price - 67;
}

void get_check(struct Cash *i){
     
     printf("\nYou spent: %d", i -> total_price);
}

int main(){

    struct Cash target;
    struct Cash *pTarget;
    char Ans;
    
    pTarget = &target;
    buy_product(pTarget);     
    get_check(pTarget);




    return 0;
}