#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int jumlah;
    printf("Masukkan jumlah data: ");
    scanf("%d", &jumlah);

    int asrama[jumlah];
    int *ptr = asrama;

    printf("ukuran memory tipe data integer = %d byte\n", sizeof(int));
    printf("ukuran memory total asrama adalah %d byte\n", sizeof(asrama));

    for(int i = 0; i < jumlah; i++)
    {
        printf("alamat index ke-%d = %lu\n", i, &asrama[i]);
    }

    int i;
    for(i = 0; i < jumlah; i++)
    {
        printf("Masukkan data ke-%d: ", i + 1);
        scanf("%d", ptr);
        ptr++;
    }

    for(i = 0; i < jumlah; i++)
    {
        printf("isi data ke-%d = %d\n", i + 1, asrama[i]);
    }
}