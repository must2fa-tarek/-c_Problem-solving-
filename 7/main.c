#include <stdio.h>
#include <stdlib.h>
//  swap with using third variable

int main()
{
    int num1, num2, temp;
    printf("please enter num1  = ");
    scanf("%d", &num1);
    printf("please enter num2  = ");
    scanf("%d", &num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf(" after swaping:");
    printf("\n num1 = %d", num1);
    printf("\n num2 = %d", num2);

    return 0;
}
