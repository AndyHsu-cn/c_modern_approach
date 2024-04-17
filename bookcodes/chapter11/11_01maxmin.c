/********************************************************************************
 * Name: 11_01maxmin.c                                                          *
 * Purpose: Finds the largest and smallest elements in an array                 *
 * Author: Andy Hsu                                                             *
 ********************************************************************************/
#include <stdio.h>
#define N 10

void max_min(int a[], int n, int * max, int * min);

int main(void)
{
    int big, small, i;
    int b[N];

    printf("Enter %d numbers: ", N);
    for(i = 0; i < N; i++)
        scanf("%d", &b[i]);
    max_min(b, N, &big, &small);
    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);

    return 0;
}

void max_min(int a[], int n, int * max, int * min)
{
    int i;

    *max = *min = a[0];
    for(i = 1; i < N; i++)
    {
        if(a[i] > *max)
            *max = a[i];
        else if(a[i] < *min)
            *min = a[i];
    }
}