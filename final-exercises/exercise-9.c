#include<stdio.h>


long int hitung_gaji(int);

int main(void)
{
    printf("Masukkan gaji pokok: ");
    long int gaji_pokok;
    scanf("%ld", &gaji_pokok);

    long int total_gaji = hitung_gaji(gaji_pokok);

    printf("total gaji yang diterima adalah: %ld\n", total_gaji);
}

long int hitung_gaji(int gaji)
{
    long int total_gaji = gaji + (gaji * 0.1);
    return total_gaji - (total_gaji * 0.05);
}