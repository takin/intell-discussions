#include <stdio.h>


int main(int argc, char ** argv)
{
    int asrama[7] = {10,11,14,5,3,30,12};
    int *ptr = &asrama[0];
    int n = 0;

    while(n < 6)
    {
        printf("asrama[%d] = %d\n", n, *ptr);
        n++;
        ptr++;
    }
    printf("%d\n", *(ptr++));
}