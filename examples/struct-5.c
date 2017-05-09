#include<stdio.h>


struct Mahasiswa {
    int nim;
    char nama[200];
    float ipk;
};

int main(void)
{

    struct Mahasiswa m1;
    m1.nim = 1234;
    m1.ipk = 2.3;

    char nama[] = "Syamsul Muttaqin mbuh ah lah test";
    
    char *ptr1 = m1.nama;
    char *ptr2 = nama;    

    while(*ptr2 != '\0')
    {
        *ptr1 = *ptr2;
        ptr2++;
        ptr1++;
    }

    double f = 1 / 3.0;

    *ptr1 = '\0';

    printf("NIM: %d\nNama:%s\nIPK:%.2f\n", m1.nim, m1.nama,f);
}