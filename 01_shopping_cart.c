#include <stdio.h>

int main(void)
{
    char item_name[30];
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;
    int count = 0;
    int limit = 0;

    printf("*******************Welcome To Your Shopping Cart*****************\n");
    printf("How many item you want to buy :");
    scanf("%d", &limit);

    while (count < limit)
    {
        getchar();
        printf("What do you want to buy :");
        fgets(item_name, sizeof(item_name), stdin);

        printf("How much the item cost:");
        scanf("%f", &price);

        printf("How many do you need:");
        scanf("%d", &quantity);

        total += quantity * price;
        count++;
    }

    printf("You Bought #%d item\n", limit);
    printf("Your Totale : %.2f\n %c", total, currency);
    printf("************************ THANK YOU :3 ****************************\n");
    printf("**********************************************************************\n");

    return 0;
}
