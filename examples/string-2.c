#include<stdio.h>


int main(void)
{
    char hello1[] = {'h','e','l','l','o','\0'};
    char hello2[] = "Hello World";

    char *newptr = hello2;

    while( *newptr != '\0' )
    {
        if( *newptr >= 97 && *newptr <= 122 ) {
            *newptr = *newptr - 32;
        } else if( *newptr >= 65 && *newptr <= 90 ) {
            *newptr = *newptr + 32;
        }
        newptr++;
    }

    printf("%s\n", hello2);

    int len = 0;
    char *ptr = hello2;
    while(*ptr != '\0'){
        len++;
        ptr++;
    }

    // printf("jumlah karakter teks \"%s\" adalah: %d\n", hello2, len);
}