#include<stdio.h>


int main(void)
{

    int asrama[5] = {10,5,3,1,7};
    int *ptr = &asrama[0];

    int n = 0;
    // printf("nilai dari n = %d\n",++n);
    // printf("nilai dari n = %d\n",++n);
    // printf("nilai dari n = %d\n",n++);
    // printf("nilai dari n = %d\n",n);

    int x = ++n * 3;
    int y = n++ * 3;

    printf("nilai dari n adalah %d, x = %d dan y = %d\n", n, x, y);


    // int n;
    // for(n = 0; n < 5; ++n )
    // {
    //     printf("alamat memory dari asrama[%d] = %lu\n", n, &asrama[n]);
    // }

    // printf("nilai dari pointer = %lu dan angka = %lu\n", ptrangka, &angka);

}