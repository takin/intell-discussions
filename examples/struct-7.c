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
    Penduduk p1;

    p1.nik = 1234;
    strcpy(p1.nama.depan,"Syamsul");
    strcpy(p1.nama.belakang, "Muttaqin");

    printf("%s %s\n", p1.nama.depan, p1.nama.belakang);
}