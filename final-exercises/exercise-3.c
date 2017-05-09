#include<stdio.h>


int main(void)
{
    printf("Masukkan karakter: ");
    char huruf;
    scanf("%c", &huruf);
    if( huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf == 'e' || huruf == 'o' || huruf == 'A' || huruf == 'I' || huruf == 'U' || huruf == 'E' || huruf == 'O' )
    {
        printf("Vokal\n");
    } else {
        printf("Konsonan\n");
    }
}