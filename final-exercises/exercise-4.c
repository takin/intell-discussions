#include<stdio.h>


int main(void)
{
    printf("Masukkan karakter: ");
    char huruf;
    scanf("%c", &huruf);
    
    switch(huruf)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'u':
        case 'U':
        case 'o':
        case 'O':
            printf("Vokal\n");
        break;
        default:
            printf("Konsonan\n");
        break;
    }
}