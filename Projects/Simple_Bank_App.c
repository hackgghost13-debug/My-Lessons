#include <stdio.h>
#include <unistd.h>

void checkBalance(float balance);
float Deposit();
float Withdraw(float balance);
int main(void)
{
    int choice = 0;
    float balance = 0.0f;

    printf("********BANK APP********\n");
    printf("How we can help you today : \n");
    sleep(1);

    do
    {
        do
        {
            printf("[1] . Deposit\n");
            printf("[2] . Withdraw\n");
            printf("[3] . Show balance\n");
            printf("[4] . Exit\n");
            printf("Choice:");
            scanf("%d", &choice);
        } while (choice < 1 || choice > 4);

        switch (choice)
        {
        case 1:
            float deposit = Deposit();
            balance = balance + deposit;
            break;
        case 2:
            balance = Withdraw(balance);
            break;
        case 3:
            checkBalance(balance);
            break;
        default:
            continue;
        }
    } while (choice != 4);
    return 0;
}
void checkBalance(float balance)
{
    printf("Your balance : $%f\n", balance);
}
float Deposit()
{
    float Depo_money = 0.0f;
    do
    {
        Depo_money = 0.0f;
        printf("Enter how much you wnat to deposit :");
        scanf("%f", &Depo_money);
    } while (Depo_money < 0);

    return Depo_money;
}
float Withdraw(float balance)
{
    float withd_money = 0.0f;
    do
    {
        printf("Enter how much you wnat to deposit :");
        scanf("%f", &withd_money);
    } while (withd_money < 0);

    balance -= withd_money;
    if (balance < 0)
    {
        printf("this withdraw go beyond you balance \n you can not preform this transition\n");
        balance += withd_money;
    }

    return balance;
}