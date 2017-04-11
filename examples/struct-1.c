#include<stdio.h>
#include<string.h>

struct student {
    int id;
    char name[100];
};

int main(void)
{
    struct student s1;
    struct student *ptr = &s1;

    ptr->id = 1;
    strcpy(ptr->name,"takin");

    // int id = 1;
    // printf("Masukkan Nama: ");
    // scanf("%s", &s1.name);
    // s1.id = id;
    // id++;

    printf("id  :%d\n", s1.id);
    printf("nama:%s\n", s1.name);
}