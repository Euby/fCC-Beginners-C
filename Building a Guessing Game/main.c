#include<stdio.h>

int main(void) {

    int guessCount = 0;
    int guessLimit = 3;
    int secretNumber = 5;
    int guess;

    while(guess != secretNumber && guessCount < guessLimit){

        printf("%d guess(es) left.\n", guessLimit - guessCount);

        printf("Guess a whole number 1-10: ");
        scanf("%d", &guess);

        /* 
        case arguments can't be evaluated at runtime.

        switch(guess){
        
            case SECRET_NUMBER :
                printf("You win!");
                break;

            default :
                printf("%d tries left", guessLimit - guessCount);
        }
        */

        guessCount++;
    }

    if(guess != secretNumber){

        printf("You Lose! The answer was %d", secretNumber);
    } else {

        printf("You Win! The answer was %d", secretNumber);
    }

    return 0;
}
