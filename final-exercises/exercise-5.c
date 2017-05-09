#include<stdio.h>

// abstract data type
void jumlahkan(int *, int *, int *);

int main(void)
{

    int a,b,hasil;
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &a);
    printf("Masukkan nilai kedua: ");
    scanf("%d", &b);
    jumlahkan(&a, &b, &hasil);
    printf("Hasil penjumlahan %d dan %d adalah %d\n", a, b, hasil);

}

void jumlahkan(int * a, int * b, int * hasil)
{
    *hasil = *a + *b;
}