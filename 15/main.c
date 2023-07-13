#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//  function to get the nth root of a number.
double root(double number, double power2);
int main()
{
    double number, result, power1, power2;
    printf(" Enter the number: ");
    scanf("%lf", &number);
    printf(" Enter the nth root  ( must not equal zero) : ");
    scanf("%lf", &power1);

    power2 = 1 / power1;
    result = root(number, power2);
    printf(" The  %.0lf root of %.1lf equal %.1lf", power1, number, result);
    return 0;
}
double root(double number, double power2)
{
    double ret;
    ret = pow(number, power2);
    return ret;
}
