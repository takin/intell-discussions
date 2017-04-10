#include<stdio.h>


int main(void)
{
    int i,j, cetak_spasi;

    for( i = 10; i > 0; i--)
    {
        cetak_spasi = 10 - i;
        for( j = 1; j <= 10; j++ ) {
            if( j <= cetak_spasi ) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
}