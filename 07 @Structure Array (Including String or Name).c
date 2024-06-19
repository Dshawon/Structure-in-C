#include <stdio.h>

struct Person
{
    char name[100];
    int age;
};

int main()
{
    struct Person p[3];
    int i;

    for(i=0; i<3; i++)
    {
        printf("Person %d\n",i+1);
        fflush(stdin);  //Buffer_Solve
        gets(p[i].name);
        scanf("%d",&p[i].age);
    }

    for(i=0; i<3; i++)
    {
        printf("Person %d\n",i+1);
        printf("%s\n",p[i].name);
        printf("%d\n",p[i].age);
    }
}
