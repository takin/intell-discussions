#include<stdio.h>

int input();
int cetak();
int cari();

int main(void)
{

    int keluar = 0;
    int pilihan;
    while(keluar != 1)
    {
        // Jika menggunakan UNIX/LINUX maka gunakan system("clear")
        // Jika menggunakan Windows maka gunakan clrscr();
        system("clear");

        printf("====================\n");
        printf("1. Input Data\n");
        printf("2. Cetak Data\n");
        printf("3. Cari Data\n");
        printf("4. Keluar\n");
        printf("====================\n");
        printf("Pilih Menu: ");
        scanf("%d", &pilihan);
        switch(pilihan)
        {
            case 1: 
                keluar = input();
            break;
            case 2: 
                keluar = cetak();
            break;
            case 3:
                keluar = cari();
            break;
            default:
                system("clear");
                printf("Yakin ingin keluar ? (y/n)");
                char c;
                scanf(" %c", &c);
                if(c == 'y'){
                    keluar = 1;
                } else {
                    keluar = 0;
                }
            break;
        }
    }

}

int cetak()
{
    char pil;
    system("clear");
    printf("Fungsi cetak di sini\n\n");
    printf("Kembali ke menu awal?(y/n): ");
    scanf(" %c", &pil);
    if( pil == 'y' )
    {
        return 0;
    } else {
        return 1;
    }
}

int cari() 
{
    char pil;
    system("clear");
    printf("algoritma pencarian di sini\n\n");
    printf("Kembali ke menu awal?(y/n): ");
    scanf(" %c", &pil);
    if( pil == 'y' )
    {
        return 0;
    } else {
        return 1;
    }
}

int input()
{
    char pil;
    system("clear");
    printf("Proses input data\n\n");
    printf("Kembali ke menu awal?(y/n): ");
    scanf(" %c", &pil);
    if( pil == 'y' )
    {
        return 0;
    } else {
        return 1;
    }
}