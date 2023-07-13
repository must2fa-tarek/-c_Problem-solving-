#include <stdio.h>
#include <stdlib.h>
// function to swap two integer using pointer
void swap_two_integer(int *num1, int *num2);
int main()
{
    int num1, num2;
    printf("please enter num1  = ");
    scanf("%d", &num1);
    printf("please enter num2  = ");
    scanf("%d", &num2);
    swap_two_integer(&num1, &num2);
    printf(" after swaping:");
    printf("\n num1 = %d", num1);
    printf("\n num2 = %d", num2);
    return 0;
} 
void swap_two_integer(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
