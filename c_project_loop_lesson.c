#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
   int number = 0;
   int age = 6;
   char name[50] = "";
   int count = 0;
   bool isRunning = true;
   char response = '\0';

   while (number <= 0)
   {
      printf("Enter a number greater then 0: ");
      scanf("%d", &number);
   }

   do
   {
      printf("Enter your age :");
      scanf("%d", &age);
   } while (age <= 0 || age > 200);

   getchar();
   printf("Enter the name :");
   fgets(name, sizeof(name), stdin);
   name[strcspn(name, "\n")] = '\0';

   while (strlen(name) == 0 && count < 1)
   {
      printf("You didn't enter your name\n");
      printf("Please Enter you name : \n");
      fgets(name, sizeof(name), stdin);
      name[strcspn(name, "\n")] = '\0';
      count++;
   }

   while (strlen(name) == 0)
   {
      printf("MAN!!\n");
      printf("Just enter you name already\n");
      fgets(name, sizeof(name), stdin);
      name[strcspn(name, "\n")] = '\0';
   }
   printf("Finally, thank you\n");

   while (isRunning)
   {
      printf("You are playing right now\n");
      printf("You want to continue?([Y]yes,[N]no):");
      scanf(" %c", &response);
      if (response != 'Y' && response != 'y')
         isRunning = false;
   }

   for (int i = 2; i <= 100; i += 2)
      printf("%d\n", i);
   for (int i = 100; i >= 0; i -= 3)
      printf("%03d\n", i);

   printf("************************************************************************\n");
   for (int i = 10; i >= 1; i--)
   {
      printf("%02d\n", i);
      sleep(1);
   }
   printf("BOOOOOM!!\nRamadan mubarak\n");

   for (int i = 0; i <= 100; i++)
   {
      if (i == 3 || i == 6 || i == 12)
         continue;
      printf("%d\n", i);
      if (i == 15)
         break;
   }

   printf("************************************************************************\n");
   return 0;
}
