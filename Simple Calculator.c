#include <stdio.h>
#define GREEN "\x1b[32m"
#define RESET "\x1b[0m"

int main() {
  while (1 > 0) {
    char opr8r;
    int num1, num2;
    printf(RESET "Enter:\ta for addition\n\t\ts for subtraction\n\t\tm for "
                 "multiplication\n\t\td for division\n");
    scanf("%s", &opr8r);
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    printf("Enter the two numbers\n");

    if (opr8r == 'a') {
      printf(GREEN "\nThe sum of %d and %d is %d\na\n", num1, num2, num1 + num2);
    }
    if (opr8r == 's') {
      printf(GREEN "\nThe result of %d - %d is %d\n\n", num1, num2,
             num1 - num2);
    }
    if (opr8r == 'm') {
      printf(GREEN "\nThe product of %d and %d is %d\n\n", num1, num2,
             num1 * num2);
    }
    if (opr8r == 'd') {
      printf(GREEN "\nThe result of %d / %d is %d\n\n", num1, num2,
             num1 / num2);
    }
  }
  return 0;
}
