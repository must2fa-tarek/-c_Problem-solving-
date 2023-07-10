#include <stdio.h>
#include <stdlib.h>
#include "project.h"
int main()
{
    uint32 Choose_sort, Choose_order, Choose_print,index, Max_elem ;
    uint32 flag = 0;
    printf(" Enter the Elements number of the array : ") ;
    scanf("%u",&Max_elem);
    sint32 my_array[Max_elem];
    printf(" Enter Elements of the array : ") ;
    for (index = 0; index < Max_elem; index++)
    {
        scanf("%i",&my_array[index]);
    }
    printf(" \n The Elements of the array  before sorted : ") ;
    Print_data(my_array,Max_elem);

    while(1)
    {
        printf(" \n \t\t Choose type of sort  : ") ;
        printf(" \n 1 >>  Bubble sort  ") ;
        printf(" \n 2 >> Insertion sort") ;
        printf(" \n 3 >> selection sort") ;
        printf(" \n \t  Your selection is --> ") ;
        scanf ("%u",&Choose_sort) ;
        if( Choose_sort <= 3 )
        {
        printf(" \n \t\t DO you want to sort the elements in ");
        printf(" \n 1 >> Ascending  order ?  ") ;
        printf(" \n 2 >> Descending order ?  ") ;
        printf(" \n \t  Your selection is --> ") ;
        scanf("%u",&Choose_order) ;
        }
        else
        {
             printf(" Invaild Number !!!!! ----> Try again ");
                flag = 1 ;
        }


        switch(Choose_sort)
        {

        case 1 :
        {
            if(Choose_order == 1)
            {
                if( !AC_Bubble_sort(my_array,Max_elem))
                {
                    printf(" \n The array is already sorted !!!! \n");

                }

            }
            else if(Choose_order == 2)
            {
                if( !DC_Bubble_sort(my_array,Max_elem))
                {
                    printf(" \n The array is already sorted !!!! \n ");

                }
            }
            else
            {
                printf(" Invaild Number !!!!! ----> Try again ");
                flag = 1 ;
            }
            break;
        }
        case 2 :
        {

            if(Choose_order == 1)
            {
                if( !Ac_Insertion_sort(my_array,Max_elem))
                {
                    printf(" \n The array is already sorted !!!! \n");
                }
            }
            else if(Choose_order == 2)
            {
                if( !Dc_Insertion_sort(my_array,Max_elem))
                {
                    printf(" \n The array is already sorted !!!! \n");

                }
            }
            else
            {
                printf(" Invaild Number !!!!! ----> Try again ");
                flag = 1 ;
            }
            break;
        }
        case 3 :
        {

            if(Choose_order == 1)
            {
                if( !Ac_selection_sort(my_array,Max_elem))
                {
                    printf(" \n The array is already sorted !!!! \n");
                }
            }
            else if(Choose_order == 2)
            {
                if( !Dc_selection_sort(my_array,Max_elem))
                {
                    printf(" \n The array is already sorted \n !!!!");

                }
            }
            else
            {
                printf(" Invaild Number !!!!! ----> Try again ");
                flag = 1 ;
            }
            break;
        }
        default:
        {
            printf(" Invaild Number !!!!! ----> Try again ");
            flag = 1 ;
            break ;
        }

        }
        break ;
    }

   if(!flag)
   {
    printf(" \n DO you want to print elements ") ;
    printf(" \n 1 >> from first element after sorted  ?  ") ;
    printf(" \n 2 >> from  end  element after sorted  ?  ") ;
    printf(" \n 3 >> Don't want to print elements ? ") ;
    printf(" \n \t  Your selection is --> ") ;
    scanf("%u",&Choose_print);

    if(Choose_print == 1 )
    {
        printf(" \n The Elements of the array  after sorted : ") ;
        Print_data(my_array,Max_elem);
    }
    else if(Choose_print == 2)
    {
        printf(" \n The Elements of the array  after sorted : ") ;
        Rev_Print_data(my_array,Max_elem);
    }
    else if(Choose_print == 3)
    {

    }
    else
    {
        printf(" Invaild Number !!!!! ----> Try again ");
    }

   }

    return 0;
}
