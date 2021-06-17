#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretNumber = 5;
    int numberOfGuess = 0;
    int guess;

    while(guess != secretNumber && numberOfGuess<3){
        printf("Enter a number: ");
        scanf("%d", &guess);
        numberOfGuess++;
    }
    if(guess == secretNumber)
        printf("Correct number!!");
    else
        printf("Out of guesses");
    return 0;
}
