#include<stdio.h>
#include<string.h>

struct Mahasiswa {
    long int nim;
    char nama[100];
    float ipk;
};

int nim = 1234;

void test(void);

int main(void)
{
    struct Mahasiswa array_of_mhs[100];

    int arr[100];

    for(int i = 0; i < 100; i++)
    {
        arr[i] = i;
    }

    struct Mahasiswa j_generasi_terakhir;

    array_of_mhs[0].nim = 1234;
    strcpy(array_of_mhs[0].nama,"syamsul muttaqin");

}