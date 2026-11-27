#include <stdio.h>

int main(void)
{
    float num1 = 0.0f;
    float num2 = 0.0f;
    float result = 0.0f;
    char operation = '\0';

    printf("***************Calculator of two numbers****************\n");
    printf("Enter your first number : ");
    scanf("%f", &num1);
    printf("Enter your opperation(/*-+) : ");
    scanf(" %c", &operation);
    printf("Enter your second number : ");
    scanf("%f", &num2);

    switch (operation)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
        }
        else
        {
            printf("Wrong Math (Dividing by zero)\n");
        }
        break;
    default:
        printf("You enter a wrong opperator\n Try again (/*-+)\n");
        result = 404;
        break;
    }

    printf("the result %.2f\n", result);
    return 0;
}
