#include <stdio.h>

void main() {
  int num, i, fact;
  printf("Enter the number to find it's factorial\n");
  scanf("%d", &num);
  fact = num;
  for (i = num - 1; i > 1; i--) {
    num = num * i;
  }
  printf("\n%d! is %d", fact, num);
}
