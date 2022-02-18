// Write a C program that enters a name from the user, and then displays it 10
// times by using goto statement.


#include <stdio.h>

int main()
{
    /* local variable definition */
    int count;
    char name[20];
    {
    printf("Insert the name: ");
    scanf("%s", name);
    }
    // counter initialization with 1
    count = 1;

    /* do loop execution */
    LOOP:
    {
       printf("%s\n ", name);
       count++;
       if ( count <= 10)
       goto LOOP;
    }
    return 0;
}
