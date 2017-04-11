#include<stdio.h>


int main(void)
{
    int angka = 10;
    int * ptr1, *ptr2;
    ptr1 = &angka;
    ptr2 = &angka;
    
    *ptr1 = 9;

    printf("nilai dari ptr2 = %d\n", *ptr2);


    // printf("isi dari ptr adalah %lu\n", ptr);
    // printf("alamat memory dari angka adalah %lu\n", &angka);

    printf("isi dari variabel angka adalah %d\n", *ptr);
}