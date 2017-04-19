#include<stdio.h>
#include<stdlib.h>

void add(int, int *);
void cetak(int *, int *);

int main(void)
{
    int jumlah;
    printf("Masukkan jumlah data: ");
    scanf("%d", &jumlah);

    int asrama[jumlah];

    add(jumlah, &asrama[0]);
    cetak(&jumlah, asrama);

}

void add(int jumlah, int * arr)
{
    printf("\n==== Masukkan data ke dalam Array ====\n");
    for(int i = 0; i < jumlah; i++)
    {
        printf("Masukkan data ke-%d: ", i + 1);
        scanf("%d", arr);
        arr++;
    }
    printf("========== !!! ==========\n");
}

void cetak(int * jumlah,int * arr)
{
    printf("\n\n==== Cetak isi Array ====\n");
    for(int i = 0; i < *jumlah; i++)
    {
        printf("isi asrama[%d]= %d\n", i, *arr);
        arr++;
    }
    printf("========== !!! ==========\n");
}