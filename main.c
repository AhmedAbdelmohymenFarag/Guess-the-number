#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;

    srand(time(0));
    secretNumber = rand() % 100 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess a number between 1 and 100\n");

    do {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < secretNumber) {
            printf("Too low!\n");
        } else if (guess > secretNumber) {
            printf("Too high!\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }

    } while (guess != secretNumber);

    return 0;
}
