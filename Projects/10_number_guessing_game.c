#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(void)
{
    int max;
    int min;
    int guess;
    int score = 0;

    printf("welcome to the number guessing game \n");
    sleep(1);
    printf("First, set the range of your game\n");
    sleep(1);

    do
    {
        printf("Set the maximum (Max) :");
        scanf("%d", &max);
        printf("Set the minimum (Min) :");
        scanf("%d", &min);
    } while (max <= min);

    sleep(1);
    printf(" Guess the number between %d - %d :", min, max);

    srand(time(NULL));
    int random_number = rand() % (max - min + 1) + min;

    do
    {
        scanf("%d", &guess);
        score++;
        if (guess < random_number)
        {
            printf("Too LOW !!\n");
        }
        else if (guess > random_number)
        {
            printf("Too HIGH !!\n");
        }
    } while (random_number != guess);

    printf("!!Winner!!\n");
    printf("Score : %d try\n", score);
    return 0;
}
