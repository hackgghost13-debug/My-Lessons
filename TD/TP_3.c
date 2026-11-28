#include <stdio.h>

int main(void)
{
    int op = 0;
    printf("dljsa:");
    scanf("%d", &op);
    switch (op)
    {
    case 1: // The sum & The ang
        // Declaration Part :
        int N = 0;
        int num = 0;
        int sum = 0;
        int a_sum = 0;
        float avg = 0.0f;
        int c = 0;
        // Code :
        do
        {
            printf("Enter A limit =");
            scanf("%d", &N);
        } while (N <= 0);
        for (int i = 0; i < N - 1; i++)
        {
            printf("Enter a interger number :");
            scanf("%d", &num);
            if (num > 0)
            {
                a_sum += num;
                c++;
            }
            sum += num;
        }
        avg = (float)a_sum / (float)c;
        printf("The sum = %d\n", sum);
        printf("The avg = %f\n", avg);
        break;
    case 2: // rent
            // Declaation Part :
        int years = 1;
        // Code :
        for (int rent = 25000 * 1.18; rent < 60000; rent += rent * 0.18)
        {
            years++;
        }
        printf("%d year\n", years);
        break;
    case 3: // The integer Part
        // Declaration Part :
        float r_num = 0.0f;
        int E_Part = 0;
        // Code :
        do
        {
            printf("Enter A positive real number");
            scanf("%f", &r_num);
        } while (r_num < 0);

        E_Part = r_num / 1;
        printf("E(%.2f)=%d\n", r_num, E_Part);
    case 4: // rainfall
        // Declaration Part :
        float RF_quant = 0.0f;
        int mounth = 0;
        float max = 0.0f;
        // Code :
        for (int i = 0; i < 12; ++i)
        {
            do
            {
                printf("Enter the rainfall for this month(in mm) :");
                scanf("%f", &RF_quant);
            } while (RF_quant < 0);

            if (RF_quant > max)
            {
                max = RF_quant;
                mounth = i + 1;
            }
        }
        printf("The most rainfall amount : %.2f in the mounth number #%d\n", max, mounth);
    case 5: // approximation of e up to n terms
        // Declaration Part :
        int n = 0;
        long double e = 1.0f;
        long double E = 1.0f;
        long int f_n = 1;
        // Code :
        do
        {
            printf("Enter the value of n :");
            scanf("%d", &n);
        } while (n < 0);
        for (int i = 2; i < n + 1; i++)
        {
            f_n *= i;
            e += (long double)1 / (long double)f_n;

            E += (long double)1 / (long double)(i);
        }
        printf("e = %llf\n", e);
        printf("E = %llf\n", E);
        break;
    case 6: // is a prime number
        // Declaration Part :
        int value = 0;
        int r = 0;
        // Code :
        do
        {
            printf("Enter a value");
            scanf("%d", &value);
        } while (value <= 0);

        printf("The prime number between 1 and %d are :\n", value);

        for (value; value >= 1; value--)
        {
            bool isPrime = true;
            for (int i = value - 1; i >= 1; --i)
            {
                r = (value % i);
                if (r == 0 && i != 1)
                {
                    isPrime = false;
                    continue;
                }
                else if (i == 1 && isPrime == true)
                {
                    printf("%d,", value);
                }
            }
        }
        printf("\n");
        break;
    case 7: // reverser :
            // Declaration Part :
        int Num = 0;
        int Q = 0;
        int R = 0;
        int Inv = 0;
        // Code :
        do
        {
            printf("Enter a  positive intger :");
            scanf("%d", &Num);
        } while (Num < 0);
        do
        {
            Q = Num / 10;
            R = Num % 10;
            Num = Q;
            Inv = Inv * 10 + R ; 
        }while(Q != 0);
        printf("The inverse : %d\n", Inv);
        break;
    case 8 :
            // Declaration Part :
        int Num_1 = 0;
        int Q_1 = 0;
        int R_1 = 0;
        int Inv_1 = 0;
        int Save = 0;
        // Code :
        do
        {
            printf("Enter a  positive intger :");
            scanf("%d", &Num_1);
        } while (Num_1 < 0);
        Save = Num_1;
        do
        {
            Q_1 = Num_1 / 10;
            R_1 = Num_1 % 10;
            Num_1 = Q_1;
            Inv_1 = Inv_1 * 10 + R_1 ; 
        }while(Q_1 != 0);

        if(Inv_1 == Save)
        {
            printf("%d is a palindrome\n", Save);
        }
        else
        {
            printf("%d is not a palindrome\n", Save);
        }
    default:
        break;
    }

    return 0;
}