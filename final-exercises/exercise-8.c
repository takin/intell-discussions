#include<stdio.h>


int main(void)
{
    char kalimat[200];
    printf("Masukkan kata/kalimat: ");
    gets(kalimat);

    char *ptr = kalimat;
    int counter = 0;

    while(*ptr != '\0')
    {
        switch(*ptr)
        {
            case 'a':
            case 'A':
            case 'i':
            case 'I':
            case 'u':
            case 'U':
            case 'e':
            case 'E':
            case 'o':
            case 'O':
                counter++;
            break;
        }
        ptr++;
    }

    printf("Jumlah huruf vokal dalam kalimat \"%s\" adalah: %d\n", kalimat, counter);
}