#include <stdio.h>
#include <string.h>

char name[50] = "";

void happyBirthday(int age);
int subtract(int x, int y);
double square(double number);
double cube(double number);
double powerValue(double base, int exponent);
double absoluteValue(double value);
double getMax(double a, double b);
void hello(char name[], int age);

int main(void)
{
   int age = 0;

   printf("What's your name ? : ");
   fgets(name, sizeof(name), stdin);
   name[strcspn(name, "\n")] = '\0';
   printf("How old are you ? : ");
   scanf("%d", &age);

   for (int i = 0; i < 6; i++)
      happyBirthday(age);

   double x = square(2.1);
   double y = square(3.2);
   double z = square(4.7);
   printf("%lf\n%lf\n%lf\n", x, y, z);

   x = cube(2.1);
   y = cube(3.2);
   z = cube(4.7);
   printf("%lf\n%lf\n%lf\n", x, y, z);

   x = powerValue(2, 8);
   printf("%f\n", x);
   y = absoluteValue(-2);
   printf("%f\n", y);
   z = getMax(4, 1);
   printf("%lf\n", z);

   printf("%d\n", subtract(100, 4));
   hello("sam", 25);
   return 0;
}

void happyBirthday(int age)
{
   printf("\nHappy Birthday to YOU !!");
   printf("\nHappy Birthday to YOU !!");
   printf("\nHappy Birthday to YOU !!");
   printf("\nHappy Birthday to YOU, %s !!", name);
   printf("\nHappy Birthday to YOU !!");
   printf("\nYou Are %d years old now !!\n", age);
}

int subtract(int x, int y)
{
   return x - y;
}

double square(double number)
{
   return number * number;
}

double cube(double number)
{
   return number * number * number;
}

double powerValue(double base, int exponent)
{
   double result = 1;
   for (int i = 0; i < exponent; i++)
      result *= base;
   return result;
}

double absoluteValue(double value)
{
   return value < 0 ? -value : value;
}

double getMax(double a, double b)
{
   return a > b ? a : b;
}

void hello(char person_name[], int age)
{
   printf("Hello, %s!\n", person_name);
   printf("You are %d years old\n", age);
}
