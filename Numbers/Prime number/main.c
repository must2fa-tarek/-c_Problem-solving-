#include <stdio.h>
#include <stdlib.h>
/* 
     function to check prime_number
     A prime number is a whole number greater than 1 whose only factors are 1 and itself. 
     ex : 2, 3, 5, 7, 11, 13, 17, 19, 23 and 29.
*/ 
int check_prime_number(int number)
{

    int i = 2 ;
    while (i <= number /2)
    {
        if (number % i)
        {
            i++ ;
            continue;
        }
        else
        {
            return 1 ;
        }
    }
    return 0 ;
}
int main()
{
    int number;
    printf(" please enter the number : ");
    scanf("%i", &number);
    if ( !check_prime_number(number))
    {
        printf("  The number (%d) is prime " , number);
    }
    else
    {
         printf("  The number (%d) is not prime " , number);

    }

    return 0;
}

