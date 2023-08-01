#include <stdio.h>
#include <stdlib.h>
#define index_zero  0 
#define index_one   1 
typedef unsigned int uint32;
typedef signed int sint32;
/**
 * @brief Get the maxANDmin number object
 *        witout changing the sequance of array 
 * @param array_numbers  pointer point to array_numbers
 * @param array_len to give array length
 * @return adress of min and max elements as array from type sint32
 */
sint32 *get_maxANDmin_number(sint32 array_numbers[], uint32 array_len);
int main()
{

    uint32 array_len = 0, counter = 0;
    sint32 *ptr_Min_Max = NULL;
    sint32 array_numbers[array_len];
    printf(" Enter the array length   :  ");
    scanf("%i", &array_len);
    printf("\n Enter the array elements :  ");
    for (counter = 0; counter < array_len; counter++)
    {
        scanf("%i", &array_numbers[counter]);
    }
    ptr_Min_Max = get_maxANDmin_number(array_numbers, array_len);
    printf("\n The min number = %i", ptr_Min_Max[index_zero]);
    printf("\n The max number = %i", ptr_Min_Max[index_one]);
    return 0;
}
sint32 *get_maxANDmin_number(sint32 array_numbers[], uint32 array_len)
{
    uint32 counter_1 = 0, counter_2 = 1;
    static sint32 Min_Max[2];
    sint32 value = 0;

    while (counter_2)
    { 
            value = array_numbers[index_zero];
        for (counter_1 = 1; counter_1 < array_len; counter_1++)
        {
            if (value > array_numbers[counter_1])
            {
                value = array_numbers[counter_1];
            }
        }
         Min_Max[index_zero] = value;
        value = array_numbers[index_zero];
        for (counter_1 = 1; counter_1 < array_len; counter_1++)
        {
            if (value < array_numbers[counter_1])
            {
                value = array_numbers[counter_1];
            }
        }
        Min_Max[index_one] = value;
        counter_2 = 0;
    } 
    return Min_Max ;
}
