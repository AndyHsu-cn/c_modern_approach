/********************************************************************************
 * Name: 08_03interest.c                                                        *
 * Purpose: Prints a table of compound interest                                 *
 * Author: Andy Hsu                                                             *
 ********************************************************************************/
#include <stdio.h>
#define INITIAL_BALANCE 100.00

int main(void)
{
    int i, low_rate, num_years, year;
    double value[5];
    const int NUM_RATES = (int)(sizeof(value) / sizeof(value[0]));

    printf("Enter interest rate: ");
    scanf("%d", &low_rate);
    printf("Enter number of years: ");
    scanf("%d", &num_years);
    printf("\nYears");
    for(i = 0; i < NUM_RATES; i++)
    {
        printf("%6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");
    for(year = 1; year <= num_years; year++)
    {
        printf("%3d    ", year);
        for(i = 0; i < NUM_RATES; i++)
        {
            value[i] += value[i] * (low_rate + i) / 100.0;
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }

    return 0;
}