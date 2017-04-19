#include<stdio.h>
#include<string.h>

int main(void)
{

    struct {
        int x;
        int y;
        char label;
    } p1,p2,p3;

    struct {
        char nama[100];
        long int nim;
        float ipk;
    } m1, m2, m3;

    char * ptr = m1.nama;

    m1.nim = 144855003;

    /*
    // kita tidak bisa melakukan assignment array structur 
    // secara langsung
    m1.nama = "Syamsul Muttaqin";
    */
    
    strcpy(ptr,"Syamsul Muttaqin");
    
    printf("nim: %ld\n", m1.nim);
    printf("Nama: %s\n", m1.nama);

}