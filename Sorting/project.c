#include <stdio.h>
#include <stdlib.h>
#include "project.h"
void swappig ( sint32 *num1, sint32 *num2)        // function to swap two  numbers 
{
    sint32 temp = *num1;
    *num1 = *num2 ;
    *num2 = temp ;
}
uint32 AC_Bubble_sort(sint32 MyData[], uint32 MyData_len)    // Ascending  order
{
    uint32  i, j ;
    uint32 flag = 0 ;
    for( i = 0 ; i < MyData_len-1 ; i++)
    {
        for( j = 0 ; j < MyData_len-1-i ; j++)
        {
            if(MyData[j+1] < MyData[j])
            {
                swappig( &MyData[j+1],&MyData[j]);
                flag = 1 ;                                   // flag to know array is sorted or not 
            }
        }
    }
    return flag ;


}
uint32 Ac_Insertion_sort (sint32 MyData[], uint32 MyData_len)  // Ascending  order
{
    uint32 flag = 0 ;
    uint32 Index = 1;
    sint32 Actual_Data, Compare_index ;
    for( Index = 1 ; Index < MyData_len ; Index++)
    {
        Actual_Data   = MyData[Index];
        Compare_index =  Index -1 ;
        while( (Actual_Data <  MyData[Compare_index]) && (Compare_index >= 0))
        {
            MyData[Compare_index+1] = MyData[Compare_index];
            Compare_index-- ;
            flag = 1 ;                                         // flag to know array is sorted or not 
        }
        MyData[Compare_index+1] = Actual_Data;

    }
    return flag ;

}
uint32 Ac_selection_sort (sint32 MyData[], uint32 MyData_len)  // Ascending  order
{
    uint32  i, j, Min_index ;
    uint32 flag = 0 ;
    for( i = 0 ; i < MyData_len-1 ; i++)
    {
        Min_index = i ;
        for( j = i+1 ; j < MyData_len ; j++)
        {
            if(MyData[j] < MyData[Min_index])
            {
                Min_index = j ;
                flag = 1 ;                                    // flag to know array is sorted or not 
            }
        }
        if( Min_index != i )
        {
            swappig(&MyData[Min_index],&MyData[i]);
        }
    }
    return flag ;

}
uint32 DC_Bubble_sort(sint32 MyData[], uint32 MyData_len)  // Descending order
{
    uint32  i, j ;
    uint32 flag = 0 ;
    for( i = 0 ; i < MyData_len-1 ; i++)
    {
        for( j = 0 ; j < MyData_len-1-i ; j++)
        {
            if(MyData[j+1] > MyData[j])
            {
                swappig(&MyData[j+1],&MyData[j]);
                flag = 1 ;                                    // flag to know array is sorted or not 
            }
        }
    }
    return flag ;


}
uint32 Dc_Insertion_sort (sint32 MyData[], uint32 MyData_len) //  Descending order
{
    uint32 flag = 0 ;
    uint32 Index = 1;
    sint32 Actual_Data, Compare_index ;
    for( Index = 1 ; Index < MyData_len ; Index++)
    {
        Actual_Data   = MyData[Index];
        Compare_index =  Index -1 ;
        while( (Actual_Data > MyData[Compare_index]) && (Compare_index >= 0))
        {
            MyData[Compare_index+1] = MyData[Compare_index];
            Compare_index-- ;
            flag = 1 ;                                        // flag to know array is sorted or not 
        }
        MyData[Compare_index+1] = Actual_Data;

    }
    return flag ;

}
uint32 Dc_selection_sort (sint32 MyData[], uint32 MyData_len) // Descending order
{
    uint32  i, j, Min_index ;
    uint32 flag = 0 ;
    for( i = 0 ; i < MyData_len-1 ; i++)
    {
        Min_index = i ;
        for( j = i+1 ; j < MyData_len ; j++)
        {
            if(MyData[j] > MyData[Min_index])
            {
                Min_index = j ;
                flag = 1 ;                                  // flag to know array is sorted or not 
            }
        }
        if( Min_index != i )
        {
            swappig(&MyData[Min_index],&MyData[i]);
        }
    }
    return flag ;

}
void Print_data(sint32 MyData[], uint32 MyData_len)  // to printd data from  first index 
{
    uint32 i ;
    for( i = 0 ; i < MyData_len ; i++)
    {
        printf(" %i",MyData[i]);
    }

}
void Rev_Print_data (sint32 MyData[], uint32 MyData_len)  // to printd data from  last index 
{
    sint32 i  =  MyData_len -1;
    for( i  ; i >= 0 ; i--)
    {
        printf(" %i",MyData[i]);
    }

}

