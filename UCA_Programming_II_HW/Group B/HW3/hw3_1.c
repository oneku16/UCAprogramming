// Write a C program that enters an alphabet from the user, and then checks if
// the alphabet is vowel or consonant by using the if…else statement.

#include <stdio.h>

char ch;

const char * vowel_cons(){

    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){

        return " is vowel";
    }
    else if ((ch >='a' && ch <='z') || (ch >='A' && ch <='Z')){
        return " is consonant";
    }
    else{

        return " it is not an alphabet";
    }
}

int main(){
    
    printf("Enter character: ");
    scanf("%c",&ch);
    printf("%c%s\n", ch, vowel_cons());
    return 0;
}