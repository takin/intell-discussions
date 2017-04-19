#include<stdio.h>


int main(void)
{
    char hello1[] = {'h','e','l','l','o','\0'};
    char hello2[] = "Hello World";

    printf("%s\n", hello2);

    hello2[5] = '-';

    printf("%s\n", hello2);

}