#include<stdio.h>

int main(void)
{
    int a,b;
    printf("masukkan angka pertama: ");
    scanf("%d",&a);
    printf("Masukkan angka kedua: ");
    scanf("%d",&b);
    printf("sebelum ditukar a=%d dan b=%d\n", a,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("setelah ditukar a=%d dan b=%d\n", a,b);
}