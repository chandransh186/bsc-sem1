#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int choice, num_count, i;
    int *numbers;

    printf("1. Calculate GCD\n");
    printf("2. Calculate LCM\n");
    printf("3. Exit\n");
    printf("-------------------------------\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
        case 2:
            printf("Enter the number of numbers: ");
            scanf("%d", &num_count);

            numbers = (int *)malloc(num_count * sizeof(int));

            printf("Enter %d numbers: ", num_count);
            for (i = 0; i < num_count; i++) {
                scanf("%d", &numbers[i]);
            }

            int result = numbers[0];
            for (i = 1; i < num_count; i++) {
                if (choice == 1) {
                    result = gcd(result, numbers[i]);
                } else {
                    result = lcm(result, numbers[i]);
                }
            }

            if (choice == 1) {
                printf("GCD of ");
                for (i = 0; i < num_count; i++) {
                    printf("%d ", numbers[i]);
                }
                printf("is: %d\n", result);
            } else {
                printf("LCM of ");
                for (i = 0; i < num_count; i++) {
                    printf("%d ", numbers[i]);
                }
                printf("is: %d\n", result);
            }

            free(numbers);
            break;
        case 3:
            printf("Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
    }

    return 0;
}
