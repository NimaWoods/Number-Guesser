#include <cstdio>
#include <cstdlib>
#include <time.h>

int main() {

    srand(time(NULL));
    bool playAgain = true;
    while (playAgain)
    {
        int randNumber = rand() % 100;
        printf("The random number is: %d\n", randNumber);
        int guess = 0;
        while (guess != randNumber )
        {
            printf("I'm thinking of a Number from 1-100. Guess the right number: \n");
            scanf("%d", &guess);

            guess == randNumber ? printf("You guessed it right!\n") : printf("You guessed it wrong!\n");
        }

        printf("Do you want to play again? (y/n): \n");

        char playAgainInput;
        scanf(" %c", &playAgainInput);
        printf("\n");
        playAgain = playAgainInput == 'y';
    }
    printf("Goodbye!");
}