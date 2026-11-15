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
    float Q;
    int q, P;
    bool isInRang;
    do
    {
        printf("Which rang your quantity is ?:\n");
        printf("[1]. 1 to 5(x)\n");
        printf("[2]. 5 to 10(x)\n");
        printf("[3]. 10 to 30(x)\n");
        printf("[4]. 30 to 60(x)\n");
        printf("[5]. from 60 and farther\n");
        scanf("%d", &q);
    } while (q < 1 && q > 5);
    do
    {
        printf("Now, spisefy how much do you need :");
        scanf("%f", &Q);
        switch (q)
        {
        case 1:
            P = 100;
            isInRang = (Q >= 1 && Q < 5);
            break;
        case 2:
            P = 90;
            isInRang = (Q < 10);
            break;
        case 3:
            P = 80;
            isInRang = (Q < 30);
            break;
        case 4:
            P = 70;
            isInRang = (Q < 60);
            break;
        default:
            P = 55;
            isInRang = (Q >= 60);
            break;
        }

    } while (isInRang == false);

    printf("The price by 1kg = %d DA\n ", P);
    Q = Q * P;
    printf("The total price = %.2f DA\n", Q);
    return 0;
}