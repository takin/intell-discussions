#include <stdio.h>


void myFunction(int *);

int main(void)
{
    int val = 2;
    printf("value before id %d\n", val);
    myFunction(&val);

    printf("value after is %d\n", val);
}

void myFunction(int *value) 
{
    *value = *value + 2;
}