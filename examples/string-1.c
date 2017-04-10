#include<stdio.h>
#include<string.h>
// #include<curses.h>

int main(int argc, char ** argv)
{
    system("clear");
    char nama[100];
    int i = 0;

    printf("Masukkan nama anda: ");
    char c = getchar();
    while(c != 10)
    {
        nama[i] = c;
        i++;
        c = getchar();
    }
    nama[i] = '\0';

    for(int j = 0; j <= i;j++ )
    {
        if ( nama[j] >= 97 && nama[j] <= 122 ) {
            nama[j] = nama[j] - 32;
        }
    }
    printf("Hello, %s\n", nama);
}