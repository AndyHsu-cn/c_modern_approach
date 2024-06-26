/********************************************************************************
 * Name: 06_04square2.c                                                         *
 * Purpose: Prints a table of squares using a for statement                     *
 * Author: Andy Hsu                                                             *
 ********************************************************************************/
#include <stdio.h>

int main(void)
{
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
        printf("%10d%10d\n", i, i * i);
     
    return 0;
}