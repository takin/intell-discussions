#include<stdio.h>


int main(void) 
{
    int i,j;
    for(i = 10; i > 0; i--) 
    {
        for(j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}