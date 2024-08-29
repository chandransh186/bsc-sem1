#include <stdio.h>

void main() {
  int a, b, i, times;
  printf("Till how many sequences you want to get fabonacci series? : ");
  scanf("%d", &times);
  printf("\n");
                        
  b = 1;
  for (i = 0; i < times; i++) {
    a = a + b;
    b = a - b;
    printf("%d ", a);
  }
}
