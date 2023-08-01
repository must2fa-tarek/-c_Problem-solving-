#include <stdio.h>
#include <stdlib.h>

typedef unsigned int uint32;
typedef signed int sint32;
/**
 * @brief Get the maxANDmin number object
 * @brief array_numbers pointer point to array_numbers
 * @brief array_len   to give array length
 * the function get the min and max number with the help of selection sort algorithms
 *  but changing the array sequance to be ascending sort
 */
void get_maxANDmin_number(sint32 array_numbers[], uint32 array_len);
void swabbing(sint32 *i, sint32 *j);
int main()
{

    uint32 array_len = 0, counter = 0;
    sint32 array_numbers[array_len];
    printf(" Enter the array length   :  ");
    scanf("%i", &array_len);
    printf("\n Enter the array elements :  ");
    for (counter = 0; counter < array_len; counter++)
    {
        scanf("%i", &array_numbers[counter]);
    }
    get_maxANDmin_number(array_numbers, array_len);
    printf("\n The min number = %i", array_numbers[0]);
    printf("\n The max number = %i", array_numbers[array_len - 1]);
    return 0;
}
void get_maxANDmin_number(sint32 array_numbers[], uint32 array_len)
{
    uint32 counter_1 = 0, min_index = 0, counter_2 = 0;
    sint32 value = 0;
    for (counter_1 = 1; counter_1 < array_len; counter_1++) /* selection sotrt algorithms*/
    {
        min_index = counter_1;
        value = array_numbers[min_index];
        for (counter_2 = 1; counter_2 < array_len; counter_2++)
        {
            if (value < array_numbers[counter_2])
            {
                min_index = counter_2;
            }
        }
        if (min_index != counter_1)
        {
            swabbing(&array_numbers[counter_1],&array_numbers[min_index]);
        }
    }
}
void swabbing(sint32 *i, sint32 *j)
{
    sint32 Temp = *i;
    *i = *j;
    *j = Temp;
}
