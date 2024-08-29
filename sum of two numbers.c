#include <stdio.h>

int main(void) {
  int a, b;
  printf("Enter the two numbers\n");
  scanf(" %d %d", &a, &b);
  printf("The sum of the numbers %d and %d is %d\n", a, b, a + b);

  return 0;
}
