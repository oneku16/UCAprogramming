#include <stdio.h>
#include <stdlib.h>


int *ptr, n1, n2;

int main() {
  
  printf("Enter size: ");
  scanf("%d", &n1);

  ptr = (int*) malloc(n1 * sizeof(int));

  printf("previously alloc memory:\n");
  for(int i = 0; i < n1; ++i) printf("%pc\n",ptr + i);

  printf("\nEnter the new size: ");
  scanf("%d", &n2);

  // rellocating the memory
  ptr = realloc(ptr, n2 * sizeof(int));

  printf("newly alloc memory:\n");
  for(int i = 1; i <= n2; i++) printf("%pc\n", ptr + i);
  
  free(ptr);

  return 0;
}