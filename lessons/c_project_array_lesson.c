#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int sort(int array[], int size);              // To order the array of integer numbers
bool searching(int x, int array[], int size); // To look for an element of the array
int userInputOfPositiveInterger();

int main(void)
{
   int numberList[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
   char grades[] = {'A', 'B', 'C', 'D', 'F'};

   int size = (int)(sizeof(numberList) / sizeof(numberList[0]));
   for (int i = 0; i < size; i++)
      printf("%4d", numberList[i]);
   printf("\n");

   int gradesSize = (int)(sizeof(grades) / sizeof(grades[0]));
   for (int i = 0; i < gradesSize; i++)
      printf("%2c", grades[i]);
   printf("\n");

   int scores[5] = {0};
   int scoresSize = (int)(sizeof(scores) / sizeof(scores[0]));
   for (int i = 0; i < scoresSize; i++)
   {
      printf("Enter a score : ");
      scanf("%d", &scores[i]);
   }
   for (int i = 0; i < scoresSize; i++)
      printf("%d\n", scores[i]);

   char aTof[3][2] = {{'A', 'B'},
                      {'C', 'D'},
                      {'E', 'F'}};
   int matrixRows = (int)(sizeof(aTof) / sizeof(aTof[0]));
   int matrixColumns = (int)(sizeof(aTof[0]) / sizeof(aTof[0][0]));
   for (int i = 0; i < matrixRows; i++)
   {
      for (int j = 0; j < matrixColumns; j++)
         printf(" %c", aTof[i][j]);
      printf("\n");
   }

   int numbers[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
   int rows, columns;
   printf("Rows :");
   scanf("%d", &rows);
   printf("Columns :");
   scanf("%d", &columns);

   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
         printf("%2d", numbers[i][j]);
      printf("\n");
   }

   if (rows < 1 || rows > 3 || columns < 1 || columns > 3)
   {
      printf("Invalid row or column. Choose values from 1 to 3.\n");
   }
   else
   {
      printf("%2d\n", numbers[rows - 1][columns - 1]);
   }

   char products[5][100] = {{0}};
   int productCount = (int)(sizeof(products) / sizeof(products[0]));
   getchar();
   for (int i = 0; i < productCount; i++)
   {  
      printf("Enter your name :");
      fgets(products[i], sizeof(products[i]), stdin);
      products[i][strcspn(products[i], "\n")] = '\0';
   }
   for (int i = 0; i < productCount; i++)
      printf("%s\n", products[i]);

   printf("Enter the limit of your array of intgers :");
   int limit = userInputOfPositiveInterger(); // return the value of one limit
   int array[limit];
   int size_ = sizeof(array) / sizeof(array[0]);
   int number = 0; // of the searching thing
   for (int i = 0; i < size_; i++)
   {
      printf("Enter a number :");
      array[i] = userInputOfPositiveInterger(); // Return the values of numbers
   }
   sort(array, size_);
   for (int i = 0; i < size_; i++)
   {
      printf("%d ", array[i]);
   }
   printf("\nEnter the number you looking for :");
   scanf("%d", &number);

   if (searching(number, array, size_))
   {
      printf("The number is found\n");
   }
   else
   {
      printf("Not found\n");
   }

   return 0;
}
int sort(int array[], int size)
{
   for (int i = 0; i < size - 1; i++)
   {
      for (int j = 0; j < size - 1; j++)
      {
         if (array[j] > array[j + 1])
         {
            int temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
         }
      }
   }
}
bool searching(int x, int array[], int size)
{
   bool isThere = false;
   int counter = 0;

   for (int i = 0; i < size; i++)
   {

      if (x == array[i])
      {
         isThere = true;
         counter++;
      }
   }
   printf("Times of showing :%d\n", counter);

   return isThere;
}
int userInputOfPositiveInterger()
{
   int x = 0;
   do
   {
      if (x < 0)
      {
         printf("Enter a positive integer please !!");
      }
      scanf("%d", &x);

   } while (x <= 0);
   return x;
}
