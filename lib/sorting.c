#include "sorting.h"

void bubble_sort(int * length, int arr[])
{
    int i,swapped;
    do{
        swapped = 0;
        for(i = 0; i < *length; i++)
        {
            if( arr[i + 1] < arr[i]  ){
               swapped = 1;
               arr[i] = arr[i] + arr[i+1];
               arr[i+1] = arr[i] - arr[i+1];
               arr[i] = arr[i] - arr[i+1];
           }
        }
    } while(swapped == 1);
}