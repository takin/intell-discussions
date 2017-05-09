#include<stdio.h>


int main(void)
{
    const int jumlah = 10;
    int masukan[jumlah];

    int i;
    for(i = 0; i < 10; i++)
    {
        printf("Masukkan nilai ke-%d: ", i + 1);
        scanf("%d", &masukan[i]);
    }

    int jumlah_baris = 4;
    int counter = 0;

    for(i = 1; i <= jumlah_baris; i++)
    {
        int j,batas;
        if ( i == jumlah_baris )
        {
            batas = 1;
        } else {
            batas = 3;
        }
        for(j = 0; j < batas; j++)
        {
            if( j == batas - 1 ){
                printf("%d", masukan[counter]);
            } else {
                printf("%d,", masukan[counter]);
            }
            // counter++;
        }
        printf("\n");
    }
}