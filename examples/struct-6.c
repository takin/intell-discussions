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
    NAMA nama;
    ALAMAT alamat;
    char jenis_kelamin[20];
} Mahasiswa;

int main(void)
{
    Mahasiswa m1;

    strcpy(m1.nama.depan, "Syamsul");
    strcpy(m1.nama.belakang, "Muttaqin");

    printf("%s %s\n", m1.nama.depan, m1.nama.belakang);
}