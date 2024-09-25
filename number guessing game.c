#include <stdio.h>
#include <stdlib.h>

int main() {
    int numberToGuess;
    int numberOfTries = 0;
    int guess;

    numberToGuess = rand() % 100 + 1;

    printf("Welcome to the number guessing game!\n");
    printf("I'm thinking of a number between 1 and 100.\n");
    printf("Try to guess it!\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        numberOfTries++;

        if (guess < numberToGuess) {
            printf("Too low! Try again.\n");
        } else if (guess > numberToGuess) {
            printf("Too high! Try again.\n");
        } else {
            printf(" Congratulations! You found the number in %d tries.\n", numberOfTries);
            break;
        }
    }

    return 0;
}
