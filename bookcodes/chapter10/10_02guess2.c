/********************************************************************************
 * Name: 10_02guess2.c                                                          *
 * Purpose: Asks user to guess a hidden number                                  *
 * Author: Andy Hsu                                                             *
 ********************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

void initialize_number_generator(void);
int choose_new_secret_number(void);
void read_guess(int secret_number);

int main(void)
{
    int secret_number;
    char command;

    printf("Guess the secret number between 1 and %d.\n\n", MAX_NUMBER);
    initialize_number_generator();
    do
    {
        secret_number = choose_new_secret_number();
        printf("A new number has been chosen.\n");
        read_guess(secret_number);
        printf("Play again? (Y/N) ");
        scanf(" %c", &command);
        printf("\n");
    } while (command == 'y' || command == 'Y');
    
    return 0;
}

void initialize_number_generator(void)
{
    srand((unsigned)time(NULL));
}

int choose_new_secret_number(void)
{
    return (rand() % MAX_NUMBER + 1);
}

void read_guess(int secret_number)
{
    int guess;
    int num_guesses = 0;

    for(;;)
    {
        printf("Enter guess: ");
        scanf("%d", &guess);
        num_guesses++;
        if(guess == secret_number)
        {
            printf("You won in %d guesses!\n\n", num_guesses);
            return;
        }else if(guess < secret_number){
            printf("Too low; try again.\n");
        }else
            printf("Too high; try again.\n");     
    }
}