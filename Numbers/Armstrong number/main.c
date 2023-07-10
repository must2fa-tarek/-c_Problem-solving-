#include <stdio.h>
#include <stdlib.h>
/*
 function to check_Armstrong_number
 An Armstrong number is one whose sum of digits raised to the power three equals the number itself. 371
 , for example, is an Armstrong number because 3^3 + 7^3 + 1^3 = 371.

*/
int check_Armstrong_number(int number)
{
    int sum = 0, i = 0;
    while (number)
    {
        i = number % 10;
        sum += i * i * i;
        number /= 10;
    }
    return sum;
}
int main()
{
    int number, ret;
    printf(" please enter the number : ");
    scanf("%i", &number);
    ret = check_Armstrong_number(number);
    if (ret == number)
    {
        printf("  The number (%d) is Armstrong ", number);
    }
    else
    {
        printf("  The number (%d) is not Armstrong ", number);
    }
    return 0;
}
