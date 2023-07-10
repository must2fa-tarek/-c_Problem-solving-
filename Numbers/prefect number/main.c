#include <stdio.h>
#include <stdlib.h>
/* 
 function to check_prefect_number
 perfect number, a positive integer that is equal to the sum of its proper divisors.
  The smallest perfect number is 6, which is the sum of 1, 2, and 3.
*/
int check_prefect_number(int number)
{
    int i = 1, sum = 0;
    for (i = 1; i < number; i++)
    {
        if (!(number % i))
        {
            sum += i;
        }
        else
        {
        }
    }
    return sum;
}
int main()
{
    int number, ret;
    printf(" please enter the number : ");
    scanf("%i", &number);
    ret = check_prefect_number(number);
    if (ret == number)
    {
        printf("  The number (%d) is prefect ", number);
    }
    else
    {
        printf("  The number (%d) is not prefect ", number);
    }
    return 0;
}
