#include <stdio.h>

int main(void)
{
    int reverse = 0;
    int number = 0;
    int quotient = 1;
    int remainder = 0;

    while (number <= 0)
    {
        printf("Enter a positive integer :");
        scanf("%d", &number);
    }

    while (quotient != 0)
    {
        quotient = number / 10;
        remainder = number % 10;
        number = quotient;
        reverse = (remainder + reverse) * 10;
    }

    reverse /= 10;
    printf("The reverse : %09d\n", reverse);
    return 0;
}
