#include "stdio.h"
#include "intell.h"

void cetak_array_int(int * len, int arr[])
{
    printf("\n\n==== Cetak isi Array ====\n");
    for(int i = 0; i < *len; i++)
    {
        printf("isi asrama[%d]= %d\n", i, *arr);
        arr++;
    }
    printf("========== !!! ==========\n");
}

void add_array_int(int * len, int arr[])
{
    printf("\n==== Masukkan data ke dalam Array ====\n");
    for(int i = 0; i < * len; i++)
    {
        printf("Masukkan data ke-%d: ", i + 1);
        scanf("%d", arr);
        arr++;
    }
    printf("========== !!! ==========\n");
}