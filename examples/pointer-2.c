#include<stdio.h>


int main(int argc, char ** argv)
{
    
    int asrama[5] = {1,4,12,3,10};
    int *ptr[5];
    int i;
    for(i = 0; i < 5; i++)
    {
        ptr[i] = &asrama[i];
    }

    printf("asrama[0] = %d\n", *ptr[0]);

}