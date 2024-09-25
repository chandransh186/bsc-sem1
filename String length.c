#include <stdio.h>
#include <string.h>

// Function to get the length of a string
int getStringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    int length = getStringLength(str);

    printf("The length of the string is: %d\n", length);

    return 0;
}
