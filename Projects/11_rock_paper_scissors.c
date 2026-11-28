#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice(void);
int getUserChoice(void);
void checkWinner(int user_choice, int computer_choice);

int main(void)
{
    srand(time(NULL));
    printf("ROCK PAPER SCISSORS\n");
    int user_choice = getUserChoice();
    int computer_choice = getComputerChoice();

    switch (user_choice)
    {
    case 1:
        printf("You Chosse Rock\n");
        break;
    case 2:
        printf("You Chosse Paper\n");
        break;
    case 3:
        printf("You Chosse Scissors\n");
        break;
    }

    switch (computer_choice)
    {
    case 1:
        printf("The CPU Chosse Rock\n");
        break;
    case 2:
        printf("The CPU Chosse Paper\n");
        break;
    case 3:
        printf("The CPU Chosse Scissors\n");
        break;
    }

    checkWinner(user_choice, computer_choice);
    return 0;
}

int getComputerChoice(void)
{
    return rand() % 3 + 1;
}

int getUserChoice(void)
{
    int option;

    printf("What's your option:\n");
    do
    {
        printf("1.Rock\n2.Paper\n3.Scissors\nOption:");
        scanf("%d", &option);
    } while (option < 1 || option > 3);

    return option;
}

void checkWinner(int user_choice, int computer_choice)
{
    if (user_choice == computer_choice)
    {
        printf("DRAW\n");
    }
    else if ((user_choice == 1 && computer_choice == 3) ||
             (user_choice == 2 && computer_choice == 1) ||
             (user_choice == 3 && computer_choice == 2))
    {
        printf("You WIN!!\n");
    }
    else
    {
        printf("You LOSE!!\n");
    }
}
