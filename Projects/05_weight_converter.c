#include <stdio.h>

int main(void)
{
    float value = 0.0f;
    int choice = 0;
    float original = 0.0f;

    printf("Weight Converter Program\n");
    printf("1.Kilogram to Pound\n");
    printf("2.Pound to Kilogram\n");
    printf("Chosse : (1 or 2)");

    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter your weight in Kilograms : ");
        scanf("%f", &value);
        original = value;
        value *= 2.20462f;
        printf("%.3f kg = %.3f pound\n", original, value);
    }
    else if (choice == 2)
    {
        printf("Enter your weight in Pounds : ");
        scanf("%f", &value);
        original = value;
        value /= 2.20462f;
        printf("%.3f pound = %.3f kg\n", original, value);
    }
    else
    {
        printf("You just enter either a number out the choices or a wrong value\n Please try again\n");
    }
    printf("*********************************THANK YOU >:3***********************************\n");

    return 0;
}
