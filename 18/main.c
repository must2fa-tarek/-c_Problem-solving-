#include <stdio.h>
#include <stdlib.h>
unsigned int add_two_char(unsigned char y, unsigned char x)
{
    unsigned int result = (unsigned int)x + (unsigned int)y;
    return result;
}
int main()
{
    unsigned char x, y;
    printf("Enter the first unsigned char number   :");
    scanf("%u", &y);
    printf("Enter the second unsigned char number  :");
    scanf("%u", &x);
    unsigned int result = add_two_char(x, y);
    printf(" the result of add two char numbers %u + %u = %u ", (unsigned int)y, (unsigned int)x, result);

    return 0;
}
