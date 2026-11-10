#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>


const float mf = 5278.9681;
float value2 = -1.0;
int chose = 0;
int ch = 0;
bool i = true;

void convert()

{
    if (chose == 1)
    {
        while (value2 < 0)
        {
            printf("What's the value in mile :");
            scanf("%f", &value2);
        }
        value2 = value2 * mf;
        printf("Your value in feets = %.3f feet\n", value2);
    }
    else if (chose == 2)
    {
        while (value2 < 0)
        {
            printf("What's the value in feets:");
            scanf("%f", &value2);
        }
        value2 = value2 / mf;
        printf("Your value in miles = %.3f feet\n", value2);
    }
}
void yesOrNo()
{
    do
    {
        printf("[0] yes\n");
        printf("[1] no\n");
        printf("Do you want do the another convert :");
        scanf("%d", &ch);
    } while (ch != 0 && ch != 1);
    if (ch == 0)
    {
        i = true;
    }
    else if (ch == 1)
    {
        i = false;
    }
}

int main(void)
{
    int TP = 0;
    printf("[1] TP#1\n");
    printf("[2] TP#2\n");
    printf("[3] TP#3\n");
    printf("[4] TP#4\n");
    printf("[5] TP#5\n");
    printf("[6] TP#6\n");
    printf("[7] TP#7\n");
    printf("[8] TP#8\n");
    printf("[9] TP#9\n");
    printf("[10] TP#10\n");
    printf("Enter your case :");

    scanf("%d", &TP);
    switch (TP)
    {
    case 1:
        printf("TP#1\n");

        // Declaration part
        int value1 = 0;
        int Double = 0;
        int Triple = 0;
        // Code :
        printf("Enter an interger value :");
        scanf("%d", &value1);
        Double = value1 * 2;
        Triple = value1 * 3;

        printf("The double =%d\nThe triple =%d\n", Double, Triple);
        printf("******Thank you :3 ***************\n");
        break;
    case 2:
        printf("Tp#2 : Rectangle\n");

        // Declaration part
        float l = 0.0f;
        float w = 0.0f;
        float P = 0.0f;
        float A = 0.0f;
        // Code
        printf("Enter the length:");
        scanf("%f", &l);
        printf("Enter the width:");
        scanf("%f", &w);
        P = (l + w) * 2;
        A = l * w;
        printf("The perimeter :%.2f\n", P);
        printf("The area :%.2f\n", A);
        printf("******Thank you :3 ***************\n");
        break;
    case 3:
        printf("Tp#3\n");

        // Declaration part
        // !!! In the Top !!!

        // Code
        while (i)
        {
            chose = 0;

            while (chose != 1 && chose != 2)
            {
                printf("[1] mile to feet:\n");
                printf("[2] feet to mile:\n");
                printf("What you want to do ?:");

                scanf("%d", &chose);
            }

            convert();
            yesOrNo();
        }

        printf("******Thank you :3 ***************\n");
        break;
    case 4:
        printf("Tp#4 :Average\n");
        // Declaration part
        char name_01[20] = "";
        float mark01 = 0.0f;
        float average01 = 0.0f;
        float Avrage = 0.0f;
        int c = 0;
        int F = 0;
        // Code
        printf("PROGRAM TO DISPLAY MARKS(One student a time)\n");
        printf("Enter your name :");
        getchar(); // to clear the input buffer
        fgets(name_01, sizeof(name_01), stdin);
        printf("How many modules do you have :");
        while (F <= 0)
        {
            scanf("%d", &F);
        } // To recive the endpoint
        while (c < F)
        {
            c++;               // to add one evry time
            mark01 = -1;       // reset the mark value to enter the loop again
            while (mark01 < 0) // to check each time that the mark is not negative
            {
                printf("Enter Your #%d Mark:", c);
                scanf("%f", &mark01);
            }
            average01 = average01 + mark01;
        }
        Avrage = average01 / F;
        getchar();
        printf("Name : %s", name_01);
        name_01[strlen(name_01) - 1] = '\0';
        printf("You average : %.2f\n", Avrage);
        if (Avrage <= 10)
        {
            printf("You failed , sorry :(\n");
        }
        else
        {
            printf("You pass , Good Work :)\n");
        }

        printf("******Thank you :3 ********\n");
        break;
    case 5:
        printf("Tp#5 :Operations\n");
        // Declaration part
        int num01 = 0;
        int num02 = 0;
        char op = '\0';
        int Result = 0;
        float result = 0.0f;
        // Code
        printf("Operations(+-*/)\n");

        while (!(op == '+' || op == '-' || op == '*' || op == '/'))
        {
            printf("Enter the opretor : [+,-,*,/]"); //  if he entre an operation differnte de mes ops
            scanf(" %c", &op);
        }

        if (op == '/')
        {
            while (num02 == 0)
            {
                printf("Please enter 2 integer numbers :\n");
                printf("First number :");
                scanf("%d", &num01);
                printf("Second number :");
                scanf("%d", &num02);
            }
            result = (float)num01 / (float)num02; // ({datatype}){name} : to change the type of the variable
            printf("Division :%d / %d = %.2f\n", num01, num02, result);
        }
        else
        {
            printf("Please enter 2 integer numbers :\n");
            printf("First number :");
            scanf("%d", &num01);
            printf("Second number :");
            scanf("%d", &num02);

            if (op == '+')
            {
                Result = num01 + num02;
                printf("Sum :%d + %d = %d\n", num01, num02, Result);
            }
            else if (op == '-')
            {
                Result = num01 - num02;
                printf("Difference :%d - %d = %d\n", num01, num02, Result);
            }
            else if (op == '*')
            {
                Result = num01 * num02;
                printf("Product :%d x %d = %.d\n", num01, num02, Result);
            }
        }

        printf("******Thank you :3 ********\n");
        break;
    case 6:
        printf("Tp#6 :Conversion Time\n");
        // Declaration part
        int H = 0;
        int tH = 0;
        int Min = 0;
        int inMin = 0;
        i = true;
        bool isForm;
        // Code
        printf("Conversion to minutes\n");
        while (i == true)
        {
            printf("Enter the time :\n");
            while (!(scanf("%d : %d", &H, &Min)))
            {
                printf("Please enter the time in this form [HH:MM]\n");
                isForm = scanf("%d : %d", &H, &Min);
                if (!isForm)
                {
                    H = 0;
                    Min = 0;
                }
            }

            tH = H; // To store the hour's version to display it later

            H = H * 60;
            inMin = H + Min;
            printf("The duration in minutes : %d H %d Min <==> %d Min\n", tH, Min, inMin);

            yesOrNo();
        }
        printf("******Thank you :3 ********\n");
        break;
    case 7:
        printf("Tp#7 :Equivalent Resistance\n");
        // Declaration part
        float R1 = 0.0f;
        float R2 = 0.0f;
        float R3 = 0.0f;
        float R_e = 0.0f;
        i = true;
        // Code
        printf("Equivalent Resistance\n");
        while (i == true)
        {
            R1 = -1.0;
            R2 = -1.0;
            R3 = -1.0;

            printf("Enter your resisternce values :\n");
            while (R1 <= 0)
            {
                printf("R1 = ");
                scanf("%f", &R1);
            }
            while (R2 <= 0)
            {
                printf("R2 = ");
                scanf("%f", &R2);
            }
            while (R3 <= 0)
            {
                printf("R3 = ");
                scanf("%f", &R3);
            }
            R_e = pow((1 / R1 + 1 / R2 + 1 / R3), (-1));

            printf("The Equivalent Resistance : %.2fΩ\n", R_e);

            yesOrNo();
        }

        printf("******Thank you :3 ********\n");
        break;
    case 8:
        printf("Tp#8 :DistanceBetweenPoints\n");
        // Declaration part
        float pX1 = 0.0;
        float pY1 = 0.0f;
        float pX2 = 0.0;
        float pY2 = 0.0f;
        float Cal = 0.0f;
        float Dis = 0.0f;
        char Unit = '\0';
        // Code
        printf("Distance Between Points\n");
        printf("Enter your point's :\n");
        printf("X1 = ");
        scanf("%f", &pX1);
        printf("Y1 = ");
        scanf("%f", &pY1);
        printf("X2 = ");
        scanf("%f", &pX2);
        printf("Y2 = ");
        scanf("%f", &pY2);

        Cal = pow(pX2 - pX1, 2) + pow(pY2 - pY1, 2);
        Dis = sqrt(Cal);

        printf("The Distance = %.2f\n", Dis);

        printf("******Thank you :3 ********\n");
        break;
    case 9:
        printf("Tp#9 :Discount\n");
        // Declaration part
        char product[50] = "";
        float price01 = 0.0f;
        float DAm = 0.0f;
        i = true;
        // Code
        printf("Discount Calculator\n");
        while (i == true)
        {
            getchar();
            printf("Enter the name of the product :");
            fgets(product, sizeof(product), stdin);
            product[strlen(product) - 1] = '\0';
            price01 = -1;
            while (price01 <= 0)
            {
                printf("Enter the price : ");
                scanf("%f", &price01);
            }
            DAm = price01 * 0.1;
            price01 = price01 - DAm;

            printf("the discount amount : %.2f DA\n", DAm);
            printf("Your product is now %.2f DA\n", price01);

            yesOrNo();
        }

        printf("******Thank you :3 ********\n");
        break;
    case 10:
        printf("Tp#10 :Circular Permutation\n");
        // Declaration part
        int X = 0;
        int Y = 0;
        int Z = 0;
        int temp = 0;
        // Code
        printf("Circular Permutation Program\n");
        printf("Enter X :");
        scanf("%d", &X);
        printf("Enter Y :");
        scanf("%d", &Y);
        printf("Enter Z :");
        scanf("%d", &Z);

        temp = X;
        X = Y;
        Y = Z;
        Z = temp;

        printf("OH !! I think I mix it up :3\n");
        printf("X =%d\n", X);
        printf("Y =%d\n", Y);
        printf("Z =%d\n", Z);
        printf("Sorry ☺☺☺☺☺\n");

        printf("******Thank you :3 ********\n");
        break;
    default:
        printf("Your case is not valide in this program , try again\n");
        break;
    }

    return 0;
}
