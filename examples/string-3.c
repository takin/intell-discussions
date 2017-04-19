#include<stdio.h>


int main(void)
{
    char name[100];
    printf("Masukkan nama anda: ");
    gets(name);
    printf("nama anda: %s\n", name);
}