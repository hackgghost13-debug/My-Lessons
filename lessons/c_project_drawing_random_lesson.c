#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
   for (int i = 1; i <= 10; i++)
   {
      for (int j = 1; j <= 10; j++)
         printf("%3d ", j * i);
      printf("\n");
   }

   int rows;
   int columns;
   char symbol;

   printf("Enter the # of rows :");
   scanf("%d", &rows);
   printf("Enter the # of columns :");
   scanf("%d", &columns);
   printf("Enter a symbol to use :");
   scanf(" %c", &symbol);

   for (int i = 1; i <= rows; i++)
   {
      for (int j = 1; j <= columns; j++)
         printf("%2c", symbol);
      printf("\n");
   }

   printf("********************************************\n");
   srand(time(NULL));
   int max = 100;
   int min = 50;

   int randomNum1 = rand() % (max - min + 1) + min;
   int randomNum2 = rand() % (max - min + 1) + min;
   int randomNum3 = rand() % (max - min + 1) + min;

   printf("%d %d %d\n", randomNum1, randomNum2, randomNum3);
   printf("*************************************************\n");
   return 0;
}
