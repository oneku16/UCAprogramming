#include <stdio.h>
#include <string.h>


char str1[50], str2[50]; 
int i, j;


int main() {
   
   printf("Enter first string: \n");
   scanf("%s", str1);
   printf("Enter second string: \n");
   scanf("%s", str2);
   for(i=0; str1[i]!='\0'; i++);
   for(j=0; str2[j]!='\0'; j++, i++)
   {
      str1[i] = str2[j];
   }
   str1[i]='\0';
   printf("\nOutput: %s",str1);
   
   return 0;
}
