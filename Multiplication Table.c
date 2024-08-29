#include <stdio.h>

void main() {
  int n, i;
  printf("Enter the number whose multiplication table you want\n");
  scanf("%d", &n);
  printf("The table of %d is:\n", n);
  for (i = 0; i < 10; i++) {
    printf("\n\t%d * %d = %d", n, i + 1, n * (i + 1));
  }
}
