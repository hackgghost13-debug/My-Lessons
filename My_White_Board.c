#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h> // linux / mac
// # include <windows.h> // Win
int temp()
{
    // for loop : Repete some code limited number of times
    //            for(Initialization; Condition : Update)

    for (int i = 2 /*start point*/; i <= 100 /*end point*/; i += 2)
    {
        printf("%d\n", i);
    }
    for (int i = 100 /*start point*/; i >= 0 /*end point*/; i -= 3)
    {
        printf("%03d\n", i);
    }
    printf("************************************************************************\n");
    for (int i = 10; i >= 1; i--)
    {
        printf("%02d\n", i);
        sleep(1); // the number in seconds // linux or mac
                  // Sleep(1000); seconds in ms // win
    }
    printf("BOOOOOM!!\nRamadan mubarak\n");
}
int main()
{
    // break = Break out of a loop (STOP)
    // continue = Skip current cycle of a loop (SKIP)


    return 0;
}
