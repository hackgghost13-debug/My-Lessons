#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
   int age;
   printf("How old are you :");
   if (scanf("%d", &age) != 1)
   {
      printf("Please, enter just numbers\n");
      return 0;
   }

   if (age > 0 && age < 200)
   {
      if (age < 4)
         printf("How in the world you type this ?\n");
      else if (age < 12)
         printf("You are a kid\n");
      else if (age < 18)
         printf("You are a teenager NOW :3\n");
      else if (age < 60)
         printf("You are an adult now\n");
      else
         printf("You are old, grandpa !!\n");
   }
   else
   {
      printf("I know that you know that we both know that cannot be real\n");
   }

   int isMale;
   printf("0- Male\n1- Female\nSet your gender:(0 or 1)");
   scanf("%d", &isMale);
   printf(isMale ? "You are a female\n" : "You are a male\n");

   char name[50];
   printf("Enter your name :");
   getchar();
   fgets(name, sizeof(name), stdin);
   name[strcspn(name, "\n")] = '\0';
   if (strlen(name) == 0)
      printf("You didn't enter your name\n");
   else
      printf("Hello %s:3\n", name);

   int dayOfWeek = 0;
   printf("Enter the day(1-7):");
   scanf("%d", &dayOfWeek);
   switch (dayOfWeek)
   {
   case 1: printf("It is Saturday\n"); break;
   case 2: printf("It is Sunday\n"); break;
   case 3: printf("It is Monday\n"); break;
   case 4: printf("It is Tuesday\n"); break;
   case 5: printf("It is Wednesday\n"); break;
   case 6: printf("It is Thursday\n"); break;
   case 7: printf("It is Friday\n"); break;
   default: printf("Invalid value\nPlease enter number between (1-7)\n"); break;
   }

   char dayOfWeekChar = '\0';
   printf("Enter the day(S - U - M - T - W - H - F):");
   scanf(" %c", &dayOfWeekChar);
   switch (dayOfWeekChar)
   {
   case 'S': printf("It is Saturday\n"); break;
   case 'U': printf("It is Sunday\n"); break;
   case 'M': printf("It is Monday\n"); break;
   case 'T': printf("It is Tuesday\n"); break;
   case 'W': printf("It is Wednesday\n"); break;
   case 'H': printf("It is Thursday\n"); break;
   case 'F': printf("It is Friday\n"); break;
   default: printf("Invalid value\n"); break;
   }

   float price = 10.00f;
   bool isStudent = true;
   bool isSenior = false;

   if (isStudent)
   {
      if (isSenior)
      {
         printf("You can get a student discount of 10%%\n");
         printf("You can get a senior discount of 20%%\n");
         price *= 0.7f;
      }
      else
      {
         printf("You can get a student discount of 10%%\n");
         price *= 0.9f;
      }
   }
   else if (isSenior)
   {
      printf("You can get a senior discount of 20%%\n");
      price *= 0.8f;
   }
   else
   {
      printf("I am sorry, our discount is not available to you\n");
   }
   printf("Your total %.2f$\n", price);

   float temperature;
   printf("Enter the temperature : ");
   scanf("%f", &temperature);
   if (temperature > 0 && temperature < 30)
      printf("GOOD\n");
   else
      printf("BAD\n");

   printf("Enter the temperature : ");
   scanf("%f", &temperature);
   if (temperature <= 0 || temperature >= 30)
      printf("BAD\n");
   else
      printf("GOOD\n");

   bool isSunny = false;
   if (!isSunny)
      printf("Sunny outside\n");
   else
      printf("Cloudy outside\n");

   return 0;
}
