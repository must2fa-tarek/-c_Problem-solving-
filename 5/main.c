#include <stdio.h>
#include <stdlib.h>
#define Max_len 10
// function to swap two numbers
void swap(int *un_sorted_array, int i, int j)
{
    int temp = un_sorted_array[i];
    un_sorted_array[i] = un_sorted_array[j];
    un_sorted_array[j] = temp;
}
// function to sort the array && check element from 0 to 9
int sort_array_and_check(int *un_sorted_array, int len)
{
    int i, j, ret = 0;
    for (i = 0; i < len; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (un_sorted_array[i] > un_sorted_array[j])
            {
                swap(un_sorted_array, i, j);
            }
            else
            {
            }
        }
    }
    for (i = 0; i < Max_len; i++)
    {
        if (un_sorted_array[i] != i)
        {
            return ret = 0;
        }
        else
        {
            ret = 1;
        }
    }
    return ret = 1 ;
}
int main()
{
    int i = 0, ret;
    int array[Max_len];
    for (i = 0; i < Max_len; i++)
    {
        scanf("%d", &array[i]);
    }
    ret = sort_array_and_check(array, Max_len);
    if (ret == 1)
    {
        printf("True");
    }
    else
    {
        printf("false");
    }

    return 0;
}
