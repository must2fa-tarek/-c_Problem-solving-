#include<stdio.h>
#include <stdlib.h>
    int countSetBits(unsigned int number) {
        unsigned int result;
        for (result = 0; number; number >>= 1)
        {
            result += number & 1;
        }
        return result;
    } int main() {
        unsigned int number, result;
        printf("Please enter the positive integar number :");
        scanf("%u", &number);
        result = countSetBits(number);
        printf("%u", result);
        return 0;
    }