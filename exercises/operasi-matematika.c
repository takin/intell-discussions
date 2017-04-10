#include <stdio.h>

void cetak(char *, int);
int jumlah(int, int);
int kali(int, int);
float bagi(int, int);
int kurang(int, int);

int main (void)
{
    int nilai1, nilai2;
    printf("Masukkan nilai pertama: ");
    scanf("%d", &nilai1);
    printf("Masukkan nilai kedua: ");
    scanf("%d", &nilai2);

    int hasil_jumlah = jumlah(nilai1, nilai2);
    cetak("Penjumlahan", hasil_jumlah);
    cetak("Perkalian", kali(nilai1, nilai2));
    // cetak("Pembagian", bagi(nilai1, nilai2));
    printf("Hasil Pembagian adalah: %f\n", bagi(nilai1, nilai2));
    cetak("Pengurangan", kurang(nilai1, nilai2));
}

void cetak(char * teks, int hasil){
    printf("Hasil %s adalah: %d\n", teks, hasil);
}


int jumlah( int a , int b ) 
{
    return a + b;
}

int kali(int a, int b) 
{
    return a * b;
}

float bagi(int a, int b)
{
    float hasil = (float) a / (float) b;
    return hasil;
}

int kurang(int a, int b)
{
    return a - b;
}