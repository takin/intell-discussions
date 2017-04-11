#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    // inisialisasi array kosong dengan jumlah 10 ruang
    int asrama1[10];
    // inisialisasi array dan langsung mengisikan nilai
    int asrama2[5] = {1,2,4,6,2};

    for(int i = 0; i < 5; i++)
    {
        printf("isi asrama 2[%d] = %d\n", i, asrama2[i]);
    }

    // isikan nilai array secara manual
    asrama1[0] = 10;
    asrama1[1] = 4;
    asrama1[2] = 7;

    printf("Hasil pengisian manual asrama1[0] = %d\n", asrama1[0]);

    // inisialiasasi array dengan menggunakan perulangan
    srand(time(NULL));
    for(int i = 0; i < 10; i++)
    {
        asrama1[i] = (rand() % (99 - 1)) + 1;
    }

    for(int i = 0; i < 10; i++)
    {
        printf("Nilai asrama1[%d] = %d\n", i, asrama1[i]);
    }
}