#include <stdio.h>
#include <stdlib.h>

typedef unsigned int uint32;
typedef signed int sint32; 
/**
 * @brief Get the maxANDmin number object
 * @brief array_numbers pointer point to array_numbers
 * @brief array_len   to give array length
 * @brief ptr_min pointer point to min number inside array
 * @brief ptr_max pointer point to max number inside array
 * the function get the min and max number without return and witout changing the array sequance
 */
void get_maxANDmin_number(sint32 array_numbers[],uint32 array_len ,sint32 *ptr_min, sint32 *ptr_max);
int main()
{

    uint32 array_len = 0, counter = 0;
    sint32 min_number = 0, max_number = 0;
    sint32 array_numbers[array_len];
    printf(" Enter the array length   :  ");
    scanf("%i", &array_len);
    printf("\n Enter the array elements :  ");
    for (counter = 0; counter < array_len; counter++)
    {
        scanf("%i", &array_numbers[counter]);
    }
    get_maxANDmin_number(array_numbers, array_len ,&min_number, &max_number);
    printf("\n The min number = %i", min_number);
    printf("\n The max number = %i", max_number);
    return 0;
}
void get_maxANDmin_number(sint32 array_numbers[],uint32 array_len ,sint32 *ptr_min, sint32 *ptr_max)
{
    uint32 counter_1 = 0 , counter_2 = 1 ;
     *ptr_min = array_numbers[counter_1] ;
     *ptr_max = array_numbers[counter_1] ;
       while(counter_2)
        {
            for (counter_1 = 1; counter_1 < array_len ; counter_1++)
            {
                if( *ptr_min  > array_numbers[counter_1] )
                {
                     *ptr_min  = array_numbers[counter_1] ;
                }
            } 
            for (counter_1 = 1; counter_1 < array_len ; counter_1++)
            {
                if( *ptr_max  < array_numbers[counter_1] )
                {
                     *ptr_max  = array_numbers[counter_1] ;
                }
            }  
              counter_2 = 0 ;

        }
}