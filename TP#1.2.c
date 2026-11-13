#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <unistd.h>

int YN = 0;
bool yOn = true;
int yesOrNo()
{
    do
    {
        // getchar();
        printf("Do You want preform this program again ?\n");
        sleep(2);
        printf("yes[0]\nno[1]\n Answer : ");
        scanf(" %c", &YN);
    } while (YN != 'y' && YN != 'n');
    if (YN == 'y')
    {
        yOn = true;
    }
    else
    {
        yOn = false;
    }
    return yOn;
}
int main()
{
    int ex;

    printf("Enter your exercise number :");
    scanf("%d", &ex);
    switch (ex)
    {
    case 1: // the sum and the product of two integers
            // Declaration part :
        int a = 0;
        int b = 0;
        int r = 0;
        // Code :
        printf("Enter two integer:\n");
        printf("a :");
        scanf("%d", &a);
        printf("b :");
        scanf("%d", &b);
        r = a + b;
        printf("a + b = %d\n", r);
        r = a * b;
        printf("a * b = %d\n", r);
        break;
    case 2: // Tringle checker
            // Declaration Part :
        float a_1 = 0.0f;
        float b_1 = 0.0f;
        float c_1 = 0.0f;
        char u_1 = '\0';

        bool isTriangle = false;
        // Code :
        printf("#######Trianglmeter :3########\n");
        printf("Enter your triangle's dimensions\n");
        do
        {
            printf("a =");
            scanf("%f", &a_1);
            printf("b =");
            scanf("%f", &b_1);
            printf("c =");
            scanf("%f", &c_1);

        } while (a_1 < 0 || b_1 < 0 || c_1 < 0);
        printf("Enter your unit\n");
        scanf(" %c", &u_1);

        isTriangle = (a_1 < b_1 + c_1) || (b_1 < a_1 + c_1) || (c_1 < a_1 + b_1);

        if (isTriangle)
        {
            if ((a_1 == b_1) && (b_1 == c_1))
            {
                printf("This is equilateral triangl\n");
            }
            else if ((a_1 == b_1) && (b_1 != c_1))
            {
                printf("This is isosceles triangl\n");
            }
            else
            {
                printf("This is scalene triangle\n");
            }
        }
        else
        {
            printf("Triangle impossible\n");
        }
    case 3: // Is it odd or even
        // Declaration part:
        int num_0 = 0;
        int r_1 = 0;
        // Code :
        printf("####Is it Even or Odd####\n");
        printf("Enter a number :");
        scanf("%d", &num_0);
        r_1 = num_0 % 2;
        if (r_1 != 0)
        {
            printf("This number is an odd number\n");
        }
        else
        {
            printf("This number is an even number\n");
        }
        break;
    case 4: // passing check
        // Declaration part :
        float grade = 0.0f;
        // Code :
        grade = -1;
        while ((grade < 0) || (grade > 20))
        {
            printf("Enter your grade\n");
            scanf("%f", &grade);
        }
        if (grade < 10)
        {
            printf("Deferred :(\n");
        }
        else if (grade < 12)
        {
            printf("Passable :|\n");
        }
        else if (grade < 14)
        {
            printf("Fair lol\n");
        }
        else if (grade < 16)
        {
            printf("Good :)\n");
        }
        else
        {
            printf("Very Good (:3)\n");
        }
        break;
    case 5: // Counting from 1 to 10
        // Declaration Part :
        char yn = '\0';
        // Code part :
        printf("Come over here\n");
        sleep(1);
        printf("Come and wast your time by watching how numbers are incrsssing from 1 to 10\n ");
        sleep(1);

        while (yn != 'N' && yn != 'Y')
        {
            printf("Are you ready");
            printf("Y(yes) ");
            printf(" N(No)");
            scanf(" %c", &yn);
        }
        if (yn == 'Y')
        {
            for (int i = 1; i <= 10; i++)
            {
                printf("%d\n", i);
                sleep(1);
            }
        }
        break;
    case 6:
        // Declaration Part :
        int num_1 = -1;
        int R = 0;
        int r_2 = 0;
        // Code:
        printf("Enter the number and I will give you the sum of each digit : \n");
        while (num_1 < 0)
        {
            scanf("%d", &num_1);
        }
        while (num_1 != 0)
        {
            r_2 = num_1 % 10;   // The rest of the division : the last digit
            num_1 = num_1 / 10; // The result of division : the rest of the digits
            R = R + r_2;        // The sum of the digits
        }
        printf("The sum of the digit = %d\n", R);
        break;
    case 7: // VAT calculator
        // Declaration Part:
        float preprice = 0;
        float price_1 = 0;
        int num_2 = 0;
        // Code :
        printf("The VAT calculator\n");
        printf("Enter the price before VAT :");
        scanf("%f", &preprice);
        printf("Enter the number of the price :");
        scanf("%d", &num_2);
        price_1 = preprice * num_2 * (1.19);
        printf("%f", price_1);
        break;
    case 8: // is it a prime number ??
        // Declaration Part :
        int num_3;
        int r_3;
        int reg;
        bool isPrime = true;
        // Code:
        printf("Is your number prime or not\n");
        sleep(1);
        do
        {
            printf("Enter your number :");
            scanf("%d", &num_3);
        } while (num_3 < 2);
        r_3 = num_3;
        while (num_3 > 2) // نستعمل فكرة اننا نفرض ان العدد اولي حتى نجد عدد اقل منه بكون قاسم له
        {
            num_3 = num_3 - 1;
            reg = r_3 % num_3; // لتخزين باقي القسمة
            if (reg != 0)
            {
                isPrime = true;
            }
            else
            {
                isPrime = false;
                num_3 = 1;
            }
        }

        if (isPrime == true)
        {
            printf("%d is a prime number\n", r_3);
        }
        else
        {
            printf("%d is not a prime number\n", r_3);
        }
        break;
    case 9: // Multiplication table
    {
        // Declaration Part :
        int num_4 = 0;
        int res_1 = 0;
        int lim = 0;
        // Code:
        printf("Enter an interger number :");
        scanf("%d", &num_4);
        printf("Enter when you want the table to stop :");
        scanf("%d", &lim);
        for (int i = 0; i <= lim; i++)
        {
            res_1 = num_4 * i;
            printf("%d x %d = %d\n", num_4, i, res_1);
        }
    }
    break;
    case 10: // Solving of the scende degree equation
        while (yOn)
        {
            // Declaration Part :
            float a_3 = 0.0f;
            float b_3 = 0.0f;
            float c_3 = 0.0f;
            float x_3 = 0.0f;
            float x_4 = 0.0f;
            int choise = 0;
            float D = 0.0f;
            // Code :
            printf("Find X\n");
            printf("Are you dealing with first-degree equation or scende-degree equation\n");
            printf("[1]1st degree\n[2]2nd degree\n");
            do
            {
                printf("Answer:");
                scanf("%d", &choise);
            } while (choise != 1 && choise != 2);
            if (choise == 1)
            {
                do
                {
                    printf("Enter b:");
                    scanf("%f", &b_3);
                    printf("Enter c:");
                    scanf("%f", &c_3);
                } while (b_3 == 0);
                x_3 = -c_3 / b_3;
                printf("x = %f", x_3);
            }
            else
            {
                do
                {
                    printf("Enter a:");
                    scanf("%f", &a_3);
                    printf("Enter b:");
                    scanf("%f", &b_3);
                    printf("Enter c:");
                    scanf("%f", &c_3);
                } while (a_3 == 0);
                D = b_3 * b_3 - 4 * a_3 * c_3;
                if (D > 0)
                {
                    x_3 = (-b + sqrt(D)) / (2 * a);
                    x_4 = (-b - sqrt(D)) / (2 * a);
                    printf("This equation has 2 solves : \n");
                    printf("x_1 = %f ; x_2 = %f", x_3, x_4);
                }

                else if (D = 0)
                {
                    x_3 = (-b) / (2 * a);
                    printf("This equation has 1 double-solve : \n");
                    printf("x_1 = x_2 = %f", x_3);
                }
                else
                {
                    printf("This equation has no solution in R \n");
                }
            }
            yesOrNo();
        };
        break;
    case 11: // The Abs of a real number
    {
        // Declaration Part :
        double rnum = 0.0f;
        double rnum_1 = 0.0f;
        double reg_1 = 0.0f;
        // Code :
        printf("Type your number :");
        scanf("%lf", &rnum);
        printf("Type your number :");
        scanf("%lf", &rnum_1);
        reg_1 = rnum;
        if (rnum < 0)
        {
            rnum *= -1;
        }
        else
        {
        }
        printf("|%lf| = %lf\n", reg_1, rnum);
        // OR to give the truth abs value :
        reg_1 = sqrt(rnum_1 * rnum_1);
        printf("|%lf| = %lf\n", rnum_1, reg_1);
    }
    break;
    case 12: // The inverce of a number :
        // Declaration Part :
        int num_4 = 0;
        int inum_4 = 0;
        int q = -1;
        int r_4 = 0;
        // Code :
        do
        {
            printf("Enter an integer to see the inverce of it :");
            scanf("%d", &num_4);
        } while (num_4 < 0);
        while (q != 0)
        {
            q = num_4 / 10;
            r_4 = num_4 % 10;
            num_4 = q;
            inum_4 = (inum_4 + r_4) * 10;
        }
        inum_4 /= 10;

        printf("The reverce of your number is %d\n", inum_4);
        break;
    case 13: // The result of a sequence
        // Declaration Part :
        int num_5 = 0;
        int res_1 = 0;
        int i = 0;
        printf("Welcome to the calculator of the sum : 1+2+...+n\n");
        sleep(1);
        printf("Enter your n :");
        scanf("%d", &num_5);
        while (i < num_5)
        {
            i++;
            res_1 = res_1 + i;
        }
        printf("The sum 1+2+..+%d = %d\n", num_5, res_1);

        break;
    case 14: // The sum , the average , the smallest and the largest
        // Declaration Part :
        int num_6 = 0;
        int lv = 0;
        int sv = 0;
        int cont = 0;
        int sum_1 = 0;
        float avr_1 = 0;

        // Code :
        do
        {
            printf("Enter a positive integer :");
            scanf("%d", &num_6);

            if (cont == 0)
            {
                sv = num_6;
            }
            if (num_6 <= 0)
            { // لاعادة كامل الحلقة اذا كان المدخل سالبا دون تسجيل القيم
                continue;
            }
            if (num_6 > lv)
            {
                lv = num_6;
            }
            else if (num_6 <= sv)
            {
                sv = num_6;
            }
            sum_1 += num_6;
            cont++;

        } while (num_6 != 0);
        avr_1 = (float)sum_1 / (float)cont;
        printf("The largest value = %d \n The smallest value = %d \n", lv, sv);
        printf("The sum = %d\n", sum_1);
        printf("The avrage = %.2f\n", avr_1);

        break;
    case 15:
        // Declaration Part
        float num_7 = 0.0f;
        // Code :
        if (num_7 > 0)
        {
            printf("%d is positive\n", num_7);
        }
        else if (num_7 < 0)
        {
            printf("%d is negative\n", num_7);
        }
        else
        {
            printf("%d is null\n", num_7);
        }
        break;
    case 16:
        // Declaration Part :
        int num_8;
        int q_1;
        int r_5;
        int innum;
        int reg_1;
        // Code :
        do
        {
            printf("Write you positive integer number :");
            scanf("%d", &num_8);
        } while (num_8 < 0);
        reg_1 = num_8;
        do
        {
            q_1 = num_8 / 10;
            r_5 = num_8 % 10;
            num_8 = q_1;
            innum = (innum + r_5) * 10;
        } while (q_1 > 0);
        innum /= 10;
        if (innum == reg_1)
        {
            printf("%d is a palindrome\n", reg_1);
        }
        else
        {
            printf("%d is not a palindrome\n", reg_1);
        }
        break;
    case 17:
        // Declaration Part:
        int age_1;
        // Code :
        printf("HELLO THERE\n");
        sleep(1);
        do
        {
            printf("How old are you? :");
            scanf("%d", age_1);
        } while (age_1 <= 0);
        if (age_1 < 12)
        {
            printf("You are still a Child :3\n");
        }
        else if (age_1 < 18)
        {
            printf("You are a Teenager lol\n");
        }
        else if (age_1 <= 59)
        {
            printf("You are an adult \n");
        }
        else
        {
            printf("All the respect to our Senior here\n");
        }
        break;
    case 18: // GCD
             // Declaration part
        int num_9;
        int num_10;
        int r_7;

        // Code :
        do
        {
            printf("Enter your numbers to calculate the GCD\n");
            printf("First number :");
            scanf("%d", &num_9);
            printf("Scond number :");
            scanf("%d", &num_10);

        } while (num_9 < 0 || num_10 <= 0 || num_9 < num_10);
        int reg_2 = num_9;
        int reg_3 = num_10;
        do
        {
            r_7 = num_9 % num_10;
            num_9 = num_10;
            num_10 = r_7;
        } while (r_7 != 0);
        printf("The GCD(%d,%d) = %d\n", reg_2, reg_3, num_9);
        break;
    case 19:
        // Declaration Part :
        float x;
        int n;
        // Code :
        do
        {
            printf("Enter your number :");
            scanf("%f", &x);
            printf("Enter the power n:");
            scanf("%d", &n);
        } while (n < 0);
        float X = x;
        for (int i = 0; i < n - 1; i++)
        {
            x = x * x;
        }
        printf("%.3f ^ %d = %.3f\n", X, n, x);
        break;
    case 20: // Fibonacci sequence:
        // Declaratiob Part:
        int num_11 = 1;
        int num_12 = 0;
        int limit;
        // Code :
        do
        {
            printf("Enter the limit of the Fibonacci sequence:");
            scanf("%d", &limit);
        } while (limit < 1);
        printf("0");
        for (int i = 1; i <= limit; i += num_11)
        {
            printf("%3d", i);
            i = num_11 + num_12;
            num_11 = num_12;
            num_12 = i;
        }
        break;
    case 21: // div 5
             // Declaration Part
        int num_13;
        // Code:
        printf("Enter the number :");
        scanf("%d",&num_13);

        if(num_13 % 5 == 0)
        {
            printf("The number is divisibale by 5\n");
        }
        else
        {
            printf("The number is not  divisibale by 5\n");
        }
        break;
    case 22:
    
        break;
    default:
        break;
    }
    return 0;
}