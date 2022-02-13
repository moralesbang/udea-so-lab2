#include <stdio.h>

int main()
{
  int *ptr = NULL; // Create interger pointer
  *ptr = 100;      // Unreference the value of pointer
  printf("Value of ptr is %p", ptr);

  return 0;
}