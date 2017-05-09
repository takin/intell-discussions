#include<stdio.h>


int main(void)
{
    float phi = 3.14;

    int r;

    printf("Masukkan nilai r: ");
    scanf("%d", &r);

    float area = phi * (r * r);
    printf("Luas area adalah: %.3f\n", area);
}