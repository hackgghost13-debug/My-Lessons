#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h> // linux / mac
// # include <windows.h> // Win
#include <time.h>

int main()
{
    int rows; // 10
    char s = '*';
    int g = 0;

    scanf("%d", &rows);
    for (int i = rows; i >= 0; i--) // Of Rows // 9 times + 1
    {
        for (int j = i; j >= 0; j--) // number of stars "*" that get print
        {                            // in first line : 9 times + 1
                                     // in scend line : 8 times + 1
            printf(" ");
        }
        for (int k = 0; k <= (rows - i) * 2; k++) // number of stars "*" that get print
        {                                         // in first line : 0 times + 1 = the number of symbol that get print
                                                  // in scend line : 2 times + 1
                                                  // in 3rd line : 4 times + 1
            printf("%c", s);
        }

        for (int l = (rows - g) * 2; l >= 0; l--)
        {
            printf(" ");
        }
        for (int l = 0; l <= (rows - i) * 2; l++)
        {
            printf("*");
        }
        g++;
        printf("\n");
    }

    for (int i = 0; i <= rows; i++) // Of Rows
    {
        for (int j = 0; j <= i * 2; j++) // number of stars "*" that get print
        {
            printf(" ");
        }
        for (int k = ((rows - i ) * 4) + 2; k >= 0; k--) // number of stars "*" that get print
        {
            printf("%c", s);
        }
        printf("\n");
    }

    return 0;
}