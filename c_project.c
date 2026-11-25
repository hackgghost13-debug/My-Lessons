#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> // Linux and mac
// # include <windows.h> // windows
// comment of single-line

/*
comment of multiple-lines
*/
// return = returns a value back to where you call a function
// we must return a the same data type we define to the function that we work with
char name_0[50] = "";
void hello(char name[], int age); // function prototype
// int g = 0; // In The Global Scope (hard to debug)
int sub(int x, int y)
{
   int result = x - y; // local_scope
   return result;
}
void happyBirthDay(int age_0)
{
   printf("\nHappy Birthday to YOU !!");
   printf("\nHappy Birthday to YOU !!");
   printf("\nHappy Birthday to YOU !!");
   printf("\nHappy Birthday to YOU,%s !!", name_0); // or you can just put it in the function and put the vzriable out the function
   printf("\nHappy Birthday to YOU !!");
   printf("\nYou Are %d years old now !!\n", age_0);
}
double square(double num)
{

   return num * num;
}
double cube(double num_1)
{
   double result = num_1 * num_1 * num_1;
   return result;
}
double power(double C_1, int P_1)
{
   int i = 0;
   double result = 1;
   for (int i = 0; i < P_1; i++)
   {
      result *= C_1;
   }

   return result;
}
double ABS(double V_1)
{

   double result;

   V_1 = ((V_1 * V_1) / V_1 + V_1) / 2;

   if (V_1 >= 0)
   {
      result = V_1;
   }
   else
   {
      result = -V_1;
   }

   return result;
}
double getMax(double C_2, double V_2)
{
   if (C_2 < V_2)
   {
      return V_2;
   }
   else if (C_2 > V_2)
   {
      return C_2;
   }
   else
   {
      return V_2, C_2;
   }
}

void basicLesson(void);
void conditionalLesson(void);
void functionLesson(void);
void loopLesson(void);
void drawingAndRandomLesson(void);
void arrayLesson(void);

int main(void)
{
   int choice = -1;

   do
   {
      printf("\n===== C Lessons =====\n");
      printf("1. Basic lesson\n");
      printf("2. Conditional lesson\n");
      printf("3. Function lesson\n");
      printf("4. Loop lesson\n");
      printf("5. Drawing and random lesson\n");
      printf("6. Array lesson\n");
      printf("0. Exit\n");
      printf("Choose a lesson: ");

      if (scanf("%d", &choice) != 1) // to denied the invalides inputs
      {
         printf("Please enter a number from the menu.\n");
         while (getchar() != '\n') // reads and discards characters until it reaches the end of the input line
         {
         }
         choice = -1;
         continue;
      }

      switch (choice)
      {
      case 1:
         basicLesson();
         break;
      case 2:
         conditionalLesson();
         break;
      case 3:
         functionLesson();
         break;
      case 4:
         loopLesson();
         break;
      case 5:
         drawingAndRandomLesson();
         break;
      case 6:
         arrayLesson();
         break;
      case 0:
         printf("Goodbye!\n");
         break;
      default:
         printf("Invalid choice. Please enter a number from 0 to 6.\n");
         break;
      }
   } while (choice != 0);

   return 0;
}

void basicLesson(void)
{
   printf("I like mhadjib\n"); /*
    To print some messages or values
    We use \n to go to new line and its called "New Line Charcter"
    */
   printf(" It's amazing\n");
   // To tell the the main function that the program end successfuly
   // variable :  reusebale container for a value.
   /*
   Data types :
      -integer (int) : store 4 bytes of memory
        to use integer numbers ,
        we use %d to print it ,
        the value take the place of the %d
      -Reals (float , double) : store 4 bytes for float and 8 bytes for double of memory
        to use dicimal and real numbers ,
        we use %f to print float numbers
        (and we write %f.number of digits after the comma),
        its make it possible to storing 6 to 7 digits after the comma ;
        we use %lf to print double numbers,
        its make it possible to storing 14 to 16 digits after the comma ;
      - Character (char) : 1 byte in memory
        to use characters and symbols ,
        we use %c to print it ,
        it can display one character at time
      - String (char[<number of characters>or you can leave it empty]) : 1byte for eah  character
        to use name and word and many charcters using an array ([]),
        we use %s to print it
      - Boolean (bool) : 1 byte in memory
        to use it to include that to know if a statment is  true or false ,
        we have to include first the libery <stdbool.h> ,
        we can represent true with 1 and false with 0 ,
        we use "Boolean " more with statmants such as if/else statmant,
        It resonse to %d
   */
   int a = 25;
   printf("%d is an integer number\n", a);
   float m = 15.69;
   double pi = 3.1445514454454617; // Note : The defult of C is 6 digit after the decimal , so we use "%.15lf"
   printf("I get %.2f\n", m);
   printf("PI = %.16lf\n", pi);
   char grade = 'A';
   char symbol = '$';
   printf("Your Grade : %c\n", grade);
   printf("This this is a little %c\n", symbol);
   char name[] = "Hack G Ghost";
   printf("My name is : %s\n", name);
   bool isOpen = false; // or true or 1 or 0
   if (isOpen)
   {
      printf("The store is OPEN\n");
   }
   else
   {
      printf("The store is CLOSE\n");
   }
   /*
    Format specifier = Special tokens that begin with a % symbol , followed by
    a character that specifies the data type and optional modifires (wight ,precision ,flags).
    They also control how data is displayed or interpreted
   */
   // spicifing data type
   int age = 18;
   float price = 19.99;
   double PI = 3.14159265359;
   char currency = '$';
   char Name[] = "HACK G GHOST";

   printf("%d\n", age);      // d means decimal : integer data type
   printf("%f\n", price);    // f means float : float and double data type
   printf("%lf\n", PI);      // lf means long float : double data type
   printf("%c\n", currency); // c means character : char data type (single-character)
   printf("%s\n", Name);     // s means string : char[] data type (array of characters)
                             // spicifing optional modifires : we put it between the % symbol and the character
   // width : The minmum number of character to print // flags : tochange how the output look (+,0,-,...ect)
   int num1 = 1;
   int num2 = 10;
   int num3 = 100;
   int num4 = -100;

   printf("%3d\n", num1);
   printf("%3d\n", num2);
   printf("%3d\n", num3);
   printf("%-3d\n", num1); // to reverce
   printf("%-3d\n", num2);
   printf("%-3d\n", num3);
   printf("%03d\n", num1); // to fill with 0s *
   printf("%03d\n", num2);
   printf("%03d\n", num3);
   printf("%+3d\n", num1); // to show the sign of the number
   printf("%+3d\n", num2);
   printf("%+3d\n", num4);
   // precision : to control the numbers of digits after the decimal
   float price1 = 19.99;
   float price2 = 1.99;
   float price3 = -100.00;

   printf("%-+7.2f$\n", price1);
   printf("%-+7.2f$\n", price2);
   printf("%-+7.2f$ (That's mean we pay you lol)\n", price3);

   // arithmethic operators =  - * / % ++ --

   int x = 3;
   int y = 2;
   int z;
   float l = 5.0;
   float b = 2.0;
   float c;
   z = x + y;
   printf("The sum : %d\n", z);
   z = x - y;
   printf("The sub : %d\n", z);
   z = x * y;
   printf("The product : %d\n", z);
   c = l / b; // div "/"
   printf("The div : %.2f\n", c);
   z = x % y; // We use "%" to calculate the reminder of the divition (mod = %)
   printf("x = y * %d + %d\n", c, z);
   /* example :
      if (z = 0)
      {
         printf("x is an even number\n");
      }
      else
      {
         printf("x is an odd number\n");
      }
   */
   x++; // "++" is using to add 1 to the number
   y--; // "--" is using to sub 1 to the number
   printf("%d\n%d\n", x, y);
   /*x = x +2  OR */ x += 2;
   /*x = x * 2  OR  x*= 2  /   x = x -2  OR  x-= 2  /    x = x / 2  OR  x/= 2 */
   printf("%d\n", x);
   // Revirce Input

   int age_1 = 0;
   float gpa = 0.0f;
   char grad = '\0';  // mens null
   char Nam[30] = ""; // we have to set a maximum number of characters whwn we about recive the input

   printf("Enter your age :");
   scanf("%d", &age_1); // & is the adress

   printf("Enter your gpa :");
   scanf("%f", &gpa);

   printf("Enter your grad :");
   scanf(" %c", &grad); // we must add a space before %c to clear the input buffer from any left data from the priveos operation

   printf("Enter your name :");
   // scanf("%s",&Nam); doesn't let you enter spaces
   getchar();                                                        // clear th input buffer
   fgets(Nam, sizeof(Nam) /*To calculate the size of bits*/, stdin); // We use it to input any text with spaces on it
   Nam[strcspn(Nam, "\n")] = '\0';                                   // we need it to clean the buffer
                                                                     // after stripping

   printf("%d\n", age_1);
   printf("%.2f\n", gpa);
   printf("%c\n", grad);
   printf("%s\n", Nam);

   // Math function :
   // Declaration Part :
   double p = 9;
   double w = 2;
   double u = 7.42;
   double i = 7.42;
   double k = 5.99;
   int h = -10;
   float H = 3;
   float K = 0.25;
   float I = 0.25;
   float U = 0.25;

   // Code :
   p = sqrt(p);   // squre root
   w = pow(w, 2); // The power function
   u = round(u);  //
   i = ceil(i);   // To round up
   k = floor(k);  // To round down
   h = abs(h);    // The Absulot Value
   H = log(H);    // Reminde : log(x) = (ln(x)/ln(10))
   K = sin(K);
   I = cos(I);
   U = tan(U);

   printf("%.6f\n", p);
   printf("%.6f\n", w);
   printf("%f\n%f\n%f\n ", u, i, k);
   printf("%d\n", h);
   printf("%.4f\n", H);
   printf("%f\n%f\n%f\n", K, I, U);
}

void conditionalLesson(void)
{
   // if statement = Do some code if condition is true .
   //                If the condition is false , don't do it.
   // Intergers
   int age_;

   printf("How old are you :");

   if (scanf("%d", &age_) != 1) // We can use this to checks whether an integer was read
   {
      printf("Please ,Enter just numbers\n");
      return;
   }

   if ((age_ > 0) && (age_ < 200))
   {
      if (age_ < 4)
      {
         printf("How in the world you type this ?\n");
      }
      else if (age_ < 12)
      {
         printf("You are a kid \n");
      }
      else if (age_ < 18)
      {
         printf("You are a teenager NOW :3\n");
      }
      else if (age_ < 60)
      {
         printf("You are an adult now\n");
      }
      else
      {
         printf("You are old, grandpa  !!\n");
      }
   }
   else
   {
      printf("I know that you know that we both know that can not be real\n");
   }
   // boolean
   bool isMale;
   printf("0- Male\n1- Female\nSet your gender:(0 or 1)");
   scanf("%d", &isMale);

   if (!isMale)
   {
      printf("You are a male\n");
   }
   else
   {
      printf("You are a female\n");
   }
   // Strings
   char name_[50];

   printf("Enter your name :");
   getchar(); // This is used to consume the newline character left in the input buffer by scanf
   fgets(name_, sizeof(name_), stdin);
   name_[strcspn(name_, "\n")] = 0; // Remove the newline character from the input string

   if (strlen(name_) == 0)
   {
      printf("You didn't enter your name\n");
   }
   else
   {
      printf("Hello %s:3\n", name_);
   }
   // switch = An alternative (بديل) to using if/else statments
   //          More efficient when work is with fixed integer values
   int dayOfWeek = 0;

   printf("Enter the day(1-7):");
   scanf("%d", &dayOfWeek);

   switch (dayOfWeek)
   {
   case 1:
      printf("It is Saturday\n");
      break; // We use it to tell the program that is the end of the case
   case 2:
      printf("It is Sunday\n");
      break;
   case 3:
      printf("It is Monday\n");
      break;
   case 4:
      printf("It is Thuesday\n");
      break;
   case 5:
      printf("It is Wednesday\n");
      break;
   case 6:
      printf("It is Thursday\n");
      break;
   case 7:
      printf("It is Friday\n");
      break;
   default:
      printf("Invalide value\nPlease enter number between (1-7)\n");
      break;
   }
   //
   char dayOfWeek_2 = '\0';
   getchar();
   printf("Enter the day(S - U - M - T - W - H - F):");
   scanf("%c", &dayOfWeek_2);

   switch (dayOfWeek_2)
   {
   case 'S':
      printf("It is Saturday\n");
      break; // We use it to tell the program that is the end of the case
   case 'U':
      printf("It is Sunday\n");
      break;
   case 'M':
      printf("It is Monday\n");
      break;
   case 'T':
      printf("It is Thuesday\n");
      break;
   case 'W':
      printf("It is Wednesday\n");
      break;
   case 'H':
      printf("It is Thursday\n");
      break;
   case 'F':
      printf("It is Friday\n");
      break;
   default:
      printf("Invalide value\nPlease enter character between (S - U - M - T - W - H - F)\n");
      break;
   }
   // nestedif statment
   float price_1 = 10.00;
   bool isStudent = true; // 10% discount
   bool isSenior = false; // 20% discount

   if (isStudent)
   {
      if (isSenior)
      {
         printf("You can get a student discount of 10%");
         printf("You can get a sinior discount of 20%");
         price_1 *= 0.7;
      }
      else
      {
         printf("You can get a student discount of 10% ");
         price_1 *= 0.9;
      }
   }
   else
   {
      if (isSenior)
      {
         printf("You can get a sinior discount of 20%");
         price_1 *= 0.8;
      }
      else
      {
         printf("I am sorry , Our discount is not avalible to you");
      }
   }

   printf("Your total %.2f$", price_1);

   // Loical Operators = Used to combine or modify boolean expression.
   float tem = 0;
   bool isSunny = false;

   //  AND = &&
   printf("Enter the temperture : ");
   scanf("%f", &tem);
   if (tem > 0 && tem < 30)
   {
      printf("GOOD\n");
   }

   else
   {
      printf("BAD\n");
   }
   //  OR = ||
   printf("Enter the temperture : ");
   scanf("%f", &tem);
   if (tem <= 0 || tem >= 30)
   {
      printf("BAD\n");
   }

   else
   {
      printf("GOOD\n");
   }
   //  NOT = !
   if (!isSunny)
   {
      printf("Sunny out side\n");
   }
   else
   {
      printf("Cloudy out Side\n");
   }
}

void functionLesson(void)
{
   // functions = A reusable section of code that can be invoked " called "
   //          Arguments can be sent to a function so that it can use them
   int age_0 = 0;

   printf("What's your name ? : ");
   fgets(name_0, sizeof(name_0), stdin);
   printf("How old are you ? : ");
   scanf("%d", &age_0);
   happyBirthDay(age_0); // We can declare variable into the parentheses ()
   happyBirthDay(age_0);
   happyBirthDay(age_0);
   happyBirthDay(age_0);
   happyBirthDay(age_0);
   happyBirthDay(age_0);
   // return
   double X_3 = square(2.1);
   double Y_3 = square(3.2);
   double Z_3 = square(4.7);

   printf("%lf\n", X_3);
   printf("%lf\n", Y_3);
   printf("%lf\n", Z_3);

   X_3 = cube(2.1);
   Y_3 = cube(3.2);
   Z_3 = cube(4.7);

   printf("%lf\n", X_3);
   printf("%lf\n", Y_3);
   printf("%lf\n", Z_3);

   X_3 = power(2, 8);
   printf("%f\n", X_3);

   Y_3 = ABS(-2);
   printf("%f\n", Y_3);

   Z_3 = getMax(4, 1);
   printf("%lf\n", Z_3);
   // variable scope =  Refers to where a variable is recognized and accessible
   //                   Variables can share the same name if they're in different scope "{}"
   int result = sub(100, 4);

   printf("%d\n", result);
   // Function Prototype : Provide the compiler w/ information about a function's:
   //                      name , return type , and parametrs before its actual definition .
   //                      Enable type checking and allows function to be used before they're define .
   //                      Improve readability, organization, and helps prevent errors
   //                      Lets us write the function after the main function

   hello("sam", 25);
}

void loopLesson(void)
{
   //  while loop : Countiue running some code while the condition is true
   //               Condition must be true for us to enter while loop
   //               !!!We only enter the while loop if the condition is true!!!
   // do-while loop : Enter first the loop then check if the condition is true
   /* while(1 == 1){
          printf("FOREVER LOOP!!!");
  }*/
   int number_1 = 0;
   int age_5 = 6;
   char name_6[50] = "";
   int cont_0 = 0;
   bool isRunning = true;
   char response = '\0';
   // The condition must be true to begin with
   while (number_1 <= 0)
   {
      printf("Enter a number greater then 0: ");
      scanf("%d", &number_1);
   }

   do
   {
      printf("Enter your age :");
      scanf("%d", &age_5);
   } while (age_5 <= 0 || age_5 > 200);
   getchar();
   printf("Enter the name :");
   fgets(name_6, sizeof(name_6), stdin);
   name_6[strlen(name_6) - 1] = '\0';

   while (strlen(name_6) == 0 && cont_0 < 1)
   {
      printf("You didn't enter your name\n");
      printf("Please Enter you name : \n");
      fgets(name_6, sizeof(name_6), stdin);
      name_6[strlen(name_6) - 1] = '\0';
      cont_0++;
   }
   while (strlen(name_6) == 0)
   {
      printf("MAN!!\n");
      printf("Just enter you name already , don't worry I won't tell any one\n");
      fgets(name_6, sizeof(name_6), stdin);
      name_6[strlen(name_6) - 1] = '\0';
   }
   printf("Finally , thank you\n");

   while (isRunning)
   {
      printf("You are playing right now\n");
      printf("You want to continue?([Y]yes,[N]no):");
      scanf(" %c", &response);
      if (response != 'Y' && response != 'y')
      {
         isRunning = false;
      }
   }
   // for loop : Repete some code limited number of times
   //            for(Initialization; Condition : Update)

   for (int i = 2 /*start point*/; i <= 100 /*end point*/; i += 2)
   {
      printf("%d\n", i);
   }
   for (int i = 100 /*start point*/; i >= 0 /*end point*/; i -= 3)
   {
      printf("%03d\n", i);
   }
   printf("************************************************************************\n");
   for (int i = 10; i >= 1; i--)
   {
      printf("%02d\n", i);
      // sleep(1); // the number in seconds // linux or mac
      // Sleep(1000); seconds in ms // win
   }
   printf("BOOOOOM!!\nRamadan mubarak\n");

   // break = Break out of a loop (STOP)
   // continue = Skip current cycle of a loop (SKIP)
   for (int i = 0; i <= 100; i++)
   {
      if (i == 3 || i == 6 || i == 12)
      {
         continue; // يتخطى باقي الاوامر وبعيد الحلقة
      }

      printf("%d\n", i);
      if (i == 15)
      {
         break; // نخرج من هذه الحلقة فورا
      }
   }
   printf("************************************************************************\n");
   // Nested loop = a loop inside a loop :)
}

void drawingAndRandomLesson(void)
{
   for (int i = 1; i <= 10; i++)
   {
      for (int j = 1; j <= 10; j++)
      {
         printf("%3d ", (j * i));
      }
      printf("\n");
   }
   // Drawing  a ragtangle :
   int rows;
   int columns;
   char symbol_1;

   printf("Enter the # of rows :");
   scanf("%d", &rows);
   printf("Enter the # of columns :");
   scanf("%d", &columns);
   printf("Enter a symbol to use :");
   scanf(" %c", &symbol_1);

   for (int i = 1; i <= rows; i++)
   {
      for (int j = 1; j <= columns; j++)
      {
         printf("%2c", symbol_1);
      }
      printf("\n");
   }
   printf("********************************************\n");
   // pseudo-random = Appear random but are determined bty a mathimatical formula that
   //                 uses  a seed value to generate a predivtable sequance of numbers.
   //                 advenced : Mersenns Twister or /dev/random
   srand(time(NULL)); // seed the random number generator

   int max = 100;
   int min = 50;

   int randomNum1 = (rand() % (max - min + 1)) + min;
   int randomNum2 = (rand() % (max - min + 1)) + min;
   int randomNum3 = (rand() % (max - min + 1)) + min;

   printf("%d %d %d\n", randomNum1, randomNum2, randomNum3);
   printf("*************************************************\n");
}

void arrayLesson(void)
{
   // array = A fixed-size collection of elements of the same data type
   int numbers[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
   char grades[] = {'A', 'B', 'C', 'D', 'F'};

   int size = sizeof(numbers) / sizeof(numbers[0]);

   for (int i = 0; i < size; i++)
   {
      printf("%4d", numbers[i]);
   }
   printf("\n");

   for (int j = 0; j < (int)(sizeof(grades) / sizeof(grades[0])); j++)
   {
      printf("%2c", grades[j]);
   }
   printf("\n");

   // USER INPUT
   int scours[5] = {0};
   int size_ = sizeof(scours) / sizeof(scours[0]);

   for (int i = 0; i < size_; i++)
   {
      printf("Enter a score : ");
      scanf("%d", &scours[i]);
   }

   for (int i = 0; i < size_; i++)
   {
      printf("%d\n", scours[i]);
   }

   // 2D array
   // 2D array =  arrays inside an array
   //              first [] contans the numbers of  arrays  and it is not necessary to specify it's max
   //              second [] contans the numbers of elements in each array and it is  necessary to specify it's max
   //             we can use it in matrixes , tables ...
   int numbers_[][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
   int IDS[2][3];

   IDS[0][0] = 1;
   IDS[0][1] = 2;
   IDS[0][2] = 3;
   IDS[1][0] = 4;
   IDS[1][1] = 5;
   IDS[1][2] = 6;
   printf("%d\n", IDS[1][0]);

   char aTof[3][2] = {{'A', 'B'},
                      {'C', 'D'},
                      {'E', 'F'}};

   int rows = sizeof(aTof) / sizeof(aTof[0]);
   int colunms = sizeof(aTof[0]) / sizeof(aTof[0][0]);

   for (int i = 0; i < rows; i++)
   {
      for (int j = 0; j < colunms; j++)
      {
         printf(" %c", aTof[i][j]);
      }
      printf("\n");
   }
   // Array of strings
   // string  array :
   char cars[][10] = {"Tersam", "Toyota", "BYD"};

   strcpy(cars[0], "KIA");

   for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
   {
      printf("%s\n", cars[i]);
   }
}

void hello(char name[], int age)
{
   printf("Hello ,%s!\n", name);
   printf("You are %d years old\n", age);
}
