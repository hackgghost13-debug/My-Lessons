#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    int hours;
    int minutes;
    int seconds;
    bool is_valid = false;

    do
    {
        printf("Put The Timer (in this form hh:mm:ss):");
        scanf("%d : %d : %d", &hours, &minutes, &seconds);
        is_valid = (hours >= 0 && hours < 24) &&
                   (minutes >= 0 && minutes < 60) &&
                   (seconds >= 0 && seconds < 60);
    } while (!is_valid);

    while (hours >= 0 && minutes >= 0 && seconds >= 0)
    {
        while (minutes >= 0)
        {
            while (seconds >= 0)
            {
                system("clear");
                printf("%02d : %02d : %02d \n", hours, minutes, seconds);
                sleep(1);
                seconds--;
            }
            seconds = 59;
            minutes--;
        }
        minutes = 59;
        hours--;
    }

    printf("Time is up\n");
    return 0;
}
