#include <stdio.h>

struct Person
{
    int age;
    float salary;
};

int main()
{
    struct Person p[4];
    int i;

    for(i=0; i<4; i++)
    {
        printf("Person %d\n",i+1);
        scanf("%d",&p[i].age);
        scanf("%f",&p[i].salary);
    }

    for(i=0; i<4; i++)
    {
        printf("Person %d\n",i+1);
        printf("%d\n",p[i].age);
        printf("%.2f\n",p[i].salary);
    }
}

