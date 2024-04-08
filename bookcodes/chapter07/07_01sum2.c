/********************************************************************************
 * Name: 07_01sum2.c                                                            *
 * Purpose: Sums a series of numbers (using long variables)                     *
 * Author: Andy Hsu                                                             *
 ********************************************************************************/
#include <stdio.h>

int main(void)
{
    long n;
    long sum = 0L;

    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");
    
    scanf("%ld", &n);
    while (n != 0L)
    {
       sum += n;
       scanf("%ld", &n); 
    }
    printf("The sum is: %ld\n", sum);

    return 0;
}