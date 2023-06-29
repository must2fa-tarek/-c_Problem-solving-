#include <stdio.h>
#include <stdlib.h>
// function to divide  any two numbers .
int divide_two_numbers(double x, double y)
{
    double result = 0.0;
    if (y)
    {
        result = x / y;
        printf("The %.1lf/%.1lf = %.1lf", x, y, result);
    }
    else
    {
        printf(" Error!!! ,It cannot be divided by zero");
    }
}
int main()
{
    double x, y;
    printf("please enter the two numbers X and y (x/y) :");
    scanf("%lf%lf", &x, &y);
    divide_two_numbers(x, y);
    return 0;
}
