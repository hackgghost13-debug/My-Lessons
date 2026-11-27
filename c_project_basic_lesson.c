#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
   printf("I like mhadjib\n");
   printf(" It's amazing\n");

   int a = 25;
   printf("%d is an integer number\n", a);
   float m = 15.69f;
   double pi = 3.1445514454454617;
   printf("I get %.2f\n", m);
   printf("PI = %.16lf\n", pi);

   char grade = 'A';
   char symbol = '$';
   printf("Your Grade : %c\n", grade);
   printf("This this is a little %c\n", symbol);
   char name[] = "Hack G Ghost";
   printf("My name is : %s\n", name);

   bool isOpen = false;
   if (isOpen)
   {
      printf("The store is OPEN\n");
   }
   else
   {
      printf("The store is CLOSE\n");
   }

   int age = 18;
   float price = 19.99f;
   double PI = 3.14159265359;
   char currency = '$';
   char Name[] = "HACK G GHOST";

   printf("%d\n", age);
   printf("%f\n", price);
   printf("%lf\n", PI);
   printf("%c\n", currency);
   printf("%s\n", Name);

   int num1 = 1;
   int num2 = 10;
   int num3 = 100;
   int num4 = -100;

   printf("%3d\n", num1);
   printf("%3d\n", num2);
   printf("%3d\n", num3);
   printf("%-3d\n", num1);
   printf("%-3d\n", num2);
   printf("%-3d\n", num3);
   printf("%03d\n", num1);
   printf("%03d\n", num2);
   printf("%03d\n", num3);
   printf("%+3d\n", num1);
   printf("%+3d\n", num2);
   printf("%+3d\n", num4);

   float price1 = 19.99f;
   float price2 = 1.99f;
   float price3 = -100.00f;

   printf("%-+7.2f$\n", price1);
   printf("%-+7.2f$\n", price2);
   printf("%-+7.2f$ (That's mean we pay you lol)\n", price3);

   int x = 3;
   int y = 2;
   int z;
   float l = 5.0f;
   float b = 2.0f;
   float c;

   z = x + y;
   printf("The sum : %d\n", z);
   z = x - y;
   printf("The sub : %d\n", z);
   z = x * y;
   printf("The product : %d\n", z);
   c = l / b;
   printf("The div : %.2f\n", c);
   z = x % y;
   printf("x = y * %d + %d\n", (int)c, z);

   x++;
   y--;
   printf("%d\n%d\n", x, y);
   x += 2;
   printf("%d\n", x);

   int age_1 = 0;
   float gpa = 0.0f;
   char grad = '\0';
   char Nam[30] = "";

   printf("Enter your age :");
   scanf("%d", &age_1);
   printf("Enter your gpa :");
   scanf("%f", &gpa);
   printf("Enter your grad :");
   scanf(" %c", &grad);
   printf("Enter your name :");
   getchar();
   fgets(Nam, sizeof(Nam), stdin);
   Nam[strcspn(Nam, "\n")] = '\0';

   printf("%d\n", age_1);
   printf("%.2f\n", gpa);
   printf("%c\n", grad);
   printf("%s\n", Nam);

   double p = 9;
   double w = 2;
   double u = 7.42;
   double i = 7.42;
   double k = 5.99;
   int h = -10;
   double H = 3;
   double K = 0.25;
   double I = 0.25;
   double U = 0.25;

   p = sqrt(p);
   w = pow(w, 2);
   u = round(u);
   i = ceil(i);
   k = floor(k);
   h = abs(h);
   H = log(H);
   K = sin(K);
   I = cos(I);
   U = tan(U);

   printf("%.6f\n", p);
   printf("%.6f\n", w);
   printf("%f\n%f\n%f\n ", u, i, k);
   printf("%d\n", h);
   printf("%.4f\n", H);
   printf("%f\n%f\n%f\n", K, I, U);

   return 0;
}
