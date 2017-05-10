#include<stdio.h>

int main(void)
{
    int counter = 0,jumlah = 0;

    for(int i = 1; i <= 200; i++)
    {
        if( i % 2 == 0 )
        {
            counter++;
            jumlah += i; // sama dengan jumlah = jumlah + i
        }
    }

    printf("jumlah angka genap: %d, totalnya: %d\n", counter, jumlah);
}