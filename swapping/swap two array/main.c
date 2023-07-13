#include <stdio.h>
#include <stdlib.h>
void print_arr_elem(int *ptrarr, int no_elem);   //Fnction to print array element .
void swap(int *ptrarr1, int *ptrarr2, int no_elem);//Funcation to swap two array  .

int main()
{
    int no_elem, i;
    printf("Enter the number of element for two array  : ");
    scanf("%i", &no_elem);
    int arr1[no_elem];
    int arr2[no_elem];
    printf("Enter the  element for first array  : ");
    for (i = 0; i < no_elem; i++)
    {
        scanf("%i", &arr1[i]);
    }
    printf("Enter the  element for second array : ");
    for (i = 0; i < no_elem; i++)
    {
        scanf("%i", &arr2[i]);
    }
    printf(" \n the first array before swap  : ");
    print_arr_elem(arr1, no_elem);
    printf(" \n the second array before swap : ");
    print_arr_elem(arr2, no_elem);
    swap(arr1, arr2, no_elem);
    printf(" \n the first array after swap   : ");
    print_arr_elem(arr1, no_elem);
    printf(" \n the second array after swap  : ");
    print_arr_elem(arr2, no_elem);
    return 0;
}
void swap(int *ptrarr1, int *ptrarr2, int no_elem)
{
    int i = 0;
    for (i = 0; i < no_elem; i++)
    {
        int temp = ptrarr1[i];
        ptrarr1[i] = ptrarr2[i];
        ptrarr2[i] = temp;
    }
}
void print_arr_elem(int *ptrarr, int no_elem)
{
    int i = 0;
    for (i = 0; i < no_elem; i++)
    {
        printf(" %i", ptrarr[i]);
    }
}
