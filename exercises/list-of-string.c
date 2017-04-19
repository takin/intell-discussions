#include<stdio.h>

int main(void)
{
    int i = 0;
    int jumlah;
    
    printf("Masukkan jumlah data: ");
    scanf("%d", &jumlah);

    char nama[jumlah][100];
    
    do{
        printf("nama ke-%d: ", i + 1);
        scanf("%s",nama[i]);
        i++;
    } while(i < jumlah);

    printf("\n\n");

    for(i = 0; i < jumlah; i++)
    {
        printf("nama ke %d: %s\n", i + 1, nama[i]);
    }
}