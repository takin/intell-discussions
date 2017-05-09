#include<stdio.h>
#include<string.h>

typedef struct {
    char depan[100];
    char belakang[100];
} NAMA;

typedef struct {
    int kode_pos;
    char jalan[200];
} ALAMAT;

typedef struct {

    long int nik;
    NAMA nama;
    ALAMAT alamat;
    char jenis_kelamin[10];
    char pekerjaan[100];    

} Penduduk;

int main(void)
{
    Penduduk penduduk[100];
    penduduk[0].nik = 1234;
    Penduduk p1 = penduduk[0];
    p1.nik = 9876;

    Penduduk *ptr = penduduk;

    printf("%ld\n", ptr->nik);

    ptr->nik = 45678;
    printf("%ld\n", ptr->nik);
}