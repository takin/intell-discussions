#include<stdio.h>

int passbyref(int *, int *);
int passbyvalue(int, int);

int main(void)
{

    int a = 10;
    int b = 33;
    int hasil;

    hasil = passbyref(&a, &b);
    hasil = passbyvalue(a, b);
    hasil = passbyref(&a, &b);
    passbyref(&a, &b);
    passbyref(&a, &b);
    hasil = passbyvalue(a, b);
    printf("nilai a dan b setelah dikirim = %d, %d \n", a, b);
    printf("hasil penjumlahannya adalah: %d\n", hasil);

}

int passbyref(int *x, int * y)
{
    * x = * x * 2;
    * y = * y - 1;
    return * x + * y;
}

int passbyvalue(int x, int y)
{
    x = x * 2;
    y = y - 1;
    return x + y;
}