#include<stdio.h>

struct Person
{
    char name[50];
    int age;
};

void display(struct Person p)
{
    printf("%s\n",p.name);
    printf("%d\n",p.age);
}

int main()
{
    struct Person p1 = {"Shawon Hussain", 22};
    struct Person p2 = {"Anisul Islam", 32};
    display(p1);
    display(p2);
}
/*
Alternative way to initialize string,,
    strcpy(p1.name, "Shawon Hussain");
*/
