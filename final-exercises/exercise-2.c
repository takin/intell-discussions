#include<stdio.h>

const float PHI = 3.14;
float hitung_area(int);

int main(void)
{
    int r;
    printf("Masukkan nilai r: ");
    scanf("%d", &r);
    printf("Luas area adalah: %.3f\n", hitung_area(r));
}

float hitung_area(int r)
{
    return PHI * r *r;
}