#include <stdio.h>

int main()
{
    int rows; // 10
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
            if (i >= 5)
            {
                printf(" ");
                continue;
            }
            printf("*");
        }

        for (int d = (rows - g) * 2; d >= 0; d--)
        {
            printf(" ");
        }
        for (int l = 0; l <= (rows - i) * 2; l++)
        {
            if (i >= 5)
            {
                printf(" ");
                continue;
            }
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
        for (int k = ((rows - i) * 4) + 2; k >= 0; k--) // number of stars "*" that get print
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}