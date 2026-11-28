#include <math.h>
#include <stdio.h>

int main(void)
{
    const double PI = 3.141592654;
    float radius = 0.0f;
    float area = 0.0f;
    float surface_area = 0.0f;
    float volume = 0.0f;

    printf("Enter the radius : ");
    scanf("%f", &radius);

    area = PI * pow(radius, 2);
    surface_area = 4 * PI * pow(radius, 2);
    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    printf("The Area : %.3f cm^2\n", area);
    printf("The Surface area : %.3f cm^2\n", surface_area);
    printf("The Volume : %.3f cm^3\n", volume);

    return 0;
}
