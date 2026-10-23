#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void)
{ // SHOPING CART PROGRAM
  // DECLARATION SECTION :
  char item_name[30];
  float price = 0.0f;
  int C = 0;
  char cu = '$';
  float T = 0.0f;
  int count = 0;
  int lim = 0;
  float TO = 0.0f;
  // ****************

  printf("*******************Welcome To Your Shopping Cart*****************\n");
  printf("How many item you want to buy :");
  scanf("%d", &lim);

  while (count < lim)
  {
    getchar();
    printf("What do you want to buy :");
    fgets(item_name, sizeof(item_name), stdin);

    printf("How much the item cost:");
    scanf("%f", &price);

    printf("How many do you need:");
    scanf("%d", &C);

    TO = T; // this Register the value of T each time

    T = C * price + TO; // her we add TO to add the last sum

    count++;
  }

  // item_name[strcspn(item_name, "\n")] = '\0'; intel i figer out HOW!!!!!!!!!!!!!!!!!!!!
  // printf("Your item is  %s\n", item_name);
  printf("You Bought #%d item\n", lim);
  printf("Your Totale : %.2f\n %c", T, cu);
  printf("************************ THANK YOU :3 ****************************\n");
  printf("**********************************************************************\n");

  // MAD LABS GAME
  char adj1[50] = "";
  char noun[50] = "";
  char verb[50] = "";
  char adj2[50] = "";
  char adj3[50] = "";
  //****************
  printf("*************Mad Labs Game******************\n");
  getchar(); // to clear the input buffer from any left data from the priveos operation
  printf("Enter an adjective : ");
  fgets(adj1, sizeof(adj1), stdin); // < == why this part doesn't work
  adj1[strlen(adj1) - 1] = '\0';

  printf("Enter an noun ( a person or an animal) : ");
  fgets(noun, sizeof(noun), stdin);
  noun[strlen(noun) - 1] = '\0';

  printf("Enter an adjective : ");
  fgets(adj2, sizeof(adj2), stdin);
  adj2[strlen(adj2) - 1] = '\0';

  printf("Enter a verb (ending with -ing) : ");
  fgets(verb, sizeof(verb), stdin);
  verb[strlen(verb) - 1] = '\0';

  printf("Enter an adjective : ");
  fgets(adj3, sizeof(adj3), stdin);
  adj3[strlen(adj3) - 1] = '\0';

  printf("Today  i went to %s zoo\n", adj1);
  printf("In an exhibit, I saw a %s.\n", noun);
  printf("The %s was %s and %s!\n", noun, adj2, verb);
  printf("I was %s!\n", adj3);

  printf("*********************************THE END >:3***********************************\n");

  printf("********************************************************************************\n");

  //     THE AREA , SURFACE AREA , AND THE VOLUME OF A CIRCUL

  // Declaration Part
  // Const
  const double PI = 3.141592654;
  // Var
  float radius = 0.0f;
  float Area = 0.0f;
  float SurArea = 0.0f; // Surface Area
  float Volume = 0.0f;
  // Code :

  printf("Enter the radius : ");
  scanf("%f", &radius);

  Area = PI * (pow(radius, 2));
  SurArea = 4 * PI * pow(radius, 2);
  Volume = (4.0 / 3.0) * PI * pow(radius, 3);

  printf("The Area : %.3f cm^2\n", Area);
  printf("The Surface area : %.3f cm^3\n", SurArea);
  printf("The Volume : %.3f cm^3\n", Volume);

  // COPMPOUND INTEREST CALCULATOR
  //  Declaration Part :
  double PV = 0.0f;
  double FV = 0.0f;
  float rate = 0.0f;
  int y = 0;
  int times = 0;
  // Code :

  printf("Compound Interst Calculator\n");

  printf("Enter the principal (p) :");
  scanf("%lf", &PV);
  printf("Enter rate % (r) :");
  scanf("%f", &rate);
  rate = rate / 100;
  printf("Enter the number of years (y) : ");
  scanf("%d", &y);
  printf("Enter the number of times per years (times) : ");
  scanf("%d", &times);

  FV = PV * pow(1 + rate / times, y * times);

  printf("Your total in %d is: $%.2lf", y, FV);
  printf("************************ THANK YOU :3 ****************************\n");
  printf("*****************************************************************\n");

  // WIGHT CONVERT PROGRAM
  // Declaration Part :
  float value = 0.0f;
  int choice = 0;
  float temp = 0.0f;

  // Code Part :
  printf("Weight Converter Program\n");
  printf("1.Kilogram to Pound\n");
  printf("2.Pound to Kilogram\n");
  printf("Chosse : (1 or 2)");

  scanf("%d", &choice);

  if (choice == 1)
  {
    printf("Enter your weight in Kilograms : ");
    scanf("%f", &value);
    temp = value;
    value = value * 2.20462;
    printf("%.3f kg = %.3f pound\n", temp, value);
  }
  else if (choice == 2)
  {
    printf("Enter your weight in Pounds : ");
    scanf("%f", &value);
    temp = value;
    value = value / 2.20462;
    printf("%.3f pound = %.3f kg\n", temp, value);
  }
  else
  {
    printf("You just enter either a number out the choices or a wrong value\n Please try again\n");
  }
  printf("*********************************THANK YOU >:3***********************************\n");

  // TEMPERATURE CONVERSION PROGRAM
  // Declaration Part :
  float value1 = 0.0f;
  char choice1 = '\0';
  float temp1 = 0.0f;

  // Code Part :
  printf("Temperature Conversion Program\n");
  printf("C.Celsius to Fahrenheit\n");
  printf("F.Fahrenheit to Celsius\n");
  printf("Chosse : (C or F)");
  getchar();
  scanf("%c", &choice1);

  if (choice1 == 'C' || choice1 == 'c')
  {
    printf("Enter your temperature in Celsius : ");
    scanf("%f", &value1);
    temp1 = value1;
    value1 = (value1 * 9 / 5) + 32;
    printf("%.1f °C = %.1f °F\n", temp1, value1);
    printf("*********************************THANK YOU >:3***********************************\n");
  }
  else if (choice1 == 'F' || choice1 == 'f')
  {
    printf("Enter your temperature in Fahrenheit : ");
    scanf("%f", &value1);
    temp1 = value1;
    value1 = (value1 - 32) * 5 / 9;
    printf("%.1f °F = %.1f °C\n", temp1, value1);
    printf("*********************************THANK YOU >:3***********************************\n");
  }
  else
  {
    printf("You just enter either a character invalide  or a wrong value\n Please try again :(\n");
  }
  // CALCULATOR PROGRAM
  // Declaration Part :
  float num1 = 0.0f;
  float num2 = 0.0f;
  float result = 0.0f;
  char opp = '\0';

  // Code :
  printf("***************Calculator of two numbers****************\n");
  printf("Enter your first number : ");
  scanf("%f", &num1);
  printf("Enter your opperation(/*-+) : ");
  getchar();
  scanf("%c", &opp);
  printf("Eneter your second number : ");
  scanf("%f", &num2);

  switch (opp)
  {
  case '+':
    result = num1 + num2;
    break;
  case '-':
    result = num1 - num2;
    break;
  case '*':
    result = num1 * num2;
    break;
  case '/':
    if (num2 != 0)
    {
      result = num1 / num2;
    }
    else
    {
      printf("Wrong Math(Dividing by zero)\n");
    }
    break;
  default:
    printf("You enter a wrong opperator\n Try again (/*-+)\n");
    result = 404;
    break;
  }
  getchar();
  printf("the result %.2f\n", result);

  return 0;
};
