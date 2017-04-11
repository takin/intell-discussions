#include<stdio.h>

struct mahasiswa {
    int nim;
    char nama[100];
    float ipk;
};

void entri(struct mahasiswa *);
void show(struct mahasiswa []);

int main(void)
{
    struct mahasiswa mhs[50];
    char y;
    int pilihan,index = 0;

    while(y != 'y'){
        system("clear");
        printf("=======================\n");
        printf("1. Entri data mahasiswa\n");
        printf("2. Show data mahasiswa\n");
        printf("3. Exit\n");
        printf("=======================\n");

        scanf("%d", &pilihan);
        switch(pilihan)
        {
            case 1: 
                entri(&mhs[index]);
                index++;
            break;
            case 2: 
                show(mhs);
            break;
            case 3: 
            default: 
                y = 'y';
            break;
        }
    }
}

void entri(struct mahasiswa * mhs)
{
    printf("NIM: ");
    scanf("%d", &mhs->nim);
    printf("nama: ");
    scanf("%s", &mhs->nama);
    printf("IPK: ");
    scanf("%f", &mhs->ipk);
    
}

void show(struct mahasiswa * mhs)
{
    int nim, ditemukan = 0;
    printf("Masukkan NIM: ");
    scanf("%d", &nim);
    while(mhs != NULL)
    {
        printf("%d\n", mhs->nim);
        if( mhs->nim == nim ) {
            ditemukan = 1;
            printf("ditemukan!");
            break;
        }
        mhs++;
    }

    printf("====================");
    if( ditemukan == 1)
    {
        printf("NIM : %d\n", mhs->nim);
        printf("Nama: %s\n", mhs->nama);
        printf("IPK : %f\n", mhs->ipk);
    } else {
        printf("Data mahasiswa tidak ditemukan!");
    }
    printf("====================");
    getchar();

}