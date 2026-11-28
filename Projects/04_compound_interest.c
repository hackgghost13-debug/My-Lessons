#include <math.h>
#include <stdio.h>

int main(void)
{
    double principal = 0.0;
    double future_value = 0.0;
    float rate = 0.0f;
    int years = 0;
    int times = 0;

    printf("Compound Interst Calculator\n");

    printf("Enter the principal (p) :");
    scanf("%lf", &principal);
    printf("Enter rate %% (r) :");
    scanf("%f", &rate);
    rate /= 100.0f;
    printf("Enter the number of years (y) : ");
    scanf("%d", &years);
    printf("Enter the number of times per years (times) : ");
    scanf("%d", &times);

    future_value = principal * pow(1 + rate / times, years * times);

    printf("Your total in %d is: $%.2lf\n", years, future_value);
    printf("************************ THANK YOU :3 ****************************\n");
    printf("*****************************************************************\n");

    return 0;
}
