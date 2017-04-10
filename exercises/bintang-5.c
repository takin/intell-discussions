#include<stdio.h>
#include<ncurses.h>

int main(void)
{
    int jumlah,i,j,min,max,kolom;

    printf("masukkan jumlah perulangan: ");
    scanf("%d", &jumlah);

    kolom = (jumlah - 1) + jumlah;

    for( i = 1; i <= jumlah; i++ ) {
        min = jumlah - (i - 1);
        max = jumlah + (i - 1);

        for( j = 1; j <= kolom; j++ ) {
            if( j >= min && j <= max ) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }



    // for ( i = 1; i <= jumlah; i++ ) {
    //     current_number = i + (i - 1);
    //     for( j = 1; j <= current_number; j++ ) {

    //     }
    // }

}