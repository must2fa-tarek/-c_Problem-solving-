#include <stdio.h>
#include <stdlib.h>
// function to write 1 or 0 to a certain bit in an integer number.
int write_1or0(int number, int bit_number, int num)
{
    switch (num)
    {
    case 0: // to clear
        number &= ~(1 << bit_number);
        break;
    case 1: // to set
        number |= (1 << bit_number);
    default:
        break;
    }
    return number;
}
int main()
{
    unsigned int bit_number, num;
    int old_number, new_number;
    printf(" Enter the integer number :");
    scanf("%i", &old_number);
    printf(" Enter the number of the bit :");
    scanf("%i", &bit_number);
    while ((bit_number < 0) || (bit_number > 31))   // assume 32 bit form (0:31)
    {
        printf(" invaild number -> Please write bit_number from 0 to 32 ...");
        scanf("%i", &bit_number);
    }
    printf("write 1 or 0?? ");
    scanf("%i", &num);
    while ((num > 1) || (num < 0))  // to sure that the user will enter  numbers  1 or 0 
    {
        printf(" invaild number -> Please write 1 or 0 ?? ");
        scanf("%i", &num);
    }
    new_number = write_1or0(old_number, bit_number, num);   // call function 
    printf("the integer new_number = %d", new_number);
    return 0;
}
