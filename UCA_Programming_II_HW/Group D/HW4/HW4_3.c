#include <stdio.h>
#include <math.h>

int main()
{
    /* local varible definition */
    int n;
 
    printf("Enter the value: ");
    scanf("%d",&n);
    { 
    printf("Number   Square  Cube   Square Root\n",n);
    printf("_______________________________________\n");
    }
    for(int i = 1; i <= n; i++)
    {
        printf("%d\t %d\t %d\t %.2f\n", i, i*i, i*i*i, sqrt((double)i));
    }
     
    return 0;
}
