#include<stdio.h>


typedef struct {
    char nama_barang[100];
    int jumlah;
    long int harga_satuan;
    long int sub_total;
} BELANJA;

int main(void)
{

    BELANJA belanjaan[10];

    char keluar = 'n';
    int pil;

    while(keluar != 'y')
    {
        system("clear");
        printf("1. Input Belanjaan\n");
        printf("2. Cetak Struk\n");
        printf("3. Keluar\n");
        printf("Masukkan pilihan: ");
        scanf("%d", &pil);
        switch(pil)
        {
            case 1:
                // fungsi untuk memasukkan data ke dalam array belanjaan 
            break;
            case 2:
                // fungsi untuk mencetak total belanjaan
            break;
            case 3:
                // fungsi untuk keluar dari program 
            break;
        }
    }

}