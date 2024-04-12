/********************************************************************************
 * Name: 09_06generic.c                                                         *
 * Purpose: Generic selection demo                                              *
 * Author: Andy Hsu                                                             *
 ********************************************************************************/
#include <stdio.h>
void say_float(float n);
void say_int(int n);
void say_double(double n);
#define say_type(n) _Generic(n,\
                int:say_int,\
                float:say_float,\
                double:say_double)(n)

int main(void)
{
    int a = 1;
    float b = 2.1f;
    double c = 3.14;

    say_type(c);
    return 0;
}

void say_int(int n)
{
    printf("Int type : %d\n", n);
}

void say_float(float n)
{
    printf("Float type : %f\n", n);
}

void say_double(double n)
{
    printf("Double type : %f\n", n);
}