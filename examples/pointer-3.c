#include<stdio.h>


int main(int argc, char ** argv)
{
    int x = 10;
    int *ptr = &x;
    int **pptr = &ptr;
    
    ptr = &x;
    pptr = &ptr;

    printf("%d\n", **pptr);
}