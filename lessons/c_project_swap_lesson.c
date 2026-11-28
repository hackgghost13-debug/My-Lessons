#include <stdio.h>
#include <string.h>

int main(void)
{
   char x[15] = "Water";
   char y[15] = "lemond";
   char temp[15];

   strcpy(temp, x);
   strcpy(x, y);
   strcpy(y, temp);

   printf("X = %s\n", x);
   printf("Y = %s\n", y);
   return 0;
}
