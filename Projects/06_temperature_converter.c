#include <stdio.h>

int main(void)
{
    float value = 0.0f;
    char choice = '\0';
    float original = 0.0f;

    printf("Temperature Conversion Program\n");
    printf("C.Celsius to Fahrenheit\n");
    printf("F.Fahrenheit to Celsius\n");
    printf("Choose : (C or F)");
    scanf(" %c", &choice);

    if (choice == 'C' || choice == 'c')
    {
        printf("Enter your temperature in Celsius : ");
        scanf("%f", &value);
        original = value;
        value = (value * 9.0f / 5.0f) + 32.0f;
        printf("%.1f °C = %.1f °F\n", original, value);
    }
    else if (choice == 'F' || choice == 'f')
    {
        printf("Enter your temperature in Fahrenheit : ");
        scanf("%f", &value);
        original = value;
        value = (value - 32.0f) * 5.0f / 9.0f;
        printf("%.1f °F = %.1f °C\n", original, value);
    }
    else
    {
        printf("You just enter either a character invalid or a wrong value\n Please try again :(\n");
        return 0;
    }

    printf("*********************************THANK YOU >:3***********************************\n");
    return 0;
}
