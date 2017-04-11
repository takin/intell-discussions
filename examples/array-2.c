#include<stdio.h>

int main(void)
{
    int asrama[10];

    asrama[0] = 10;
    asrama[1] = 13;

    printf("%lu - %lu\n", &asrama, &asrama[0]);
}