/********************************************************************************
 * Name: 06_06checking.c                                                        *
 * Purpose: Balances a checkbook                                                *
 * Author: Andy Hsu                                                             *
 ********************************************************************************/
#include <stdio.h>

int main(void)
{
    int cmd;
    float balance = 0.0f;
    float credit, debit;

    printf("*** ACME checkingbook-balancing program ***\n");
    printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n\n");
    for (;;)
    {
        printf("Enter command: ");
        scanf("%d", &cmd);
        switch (cmd)
        {
        case 0:
            balance = 0.0f;
            break;
        case 1:
            printf("Enter amound of credit: ");
            scanf("%f", &credit);
            balance += credit;
            break;
        case 2:
            printf("Enter amound of debit: ");
            scanf("%f", &debit);
            balance -= debit;
            break;
        case 3:
            printf("Current balance: $%.2f\n", balance);
            break;
        case 4:
            goto end;
        default:
            printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n\n");
            break;
        }
    }
    end:

    return 0;
}