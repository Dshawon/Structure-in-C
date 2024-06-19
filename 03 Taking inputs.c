#include <stdio.h>

struct Person
{
    int age;
    float salary;
};

int main()
{
    struct Person p1, p2;

    scanf("%d",&p1.age);
    scanf("%f",&p1.salary);
    scanf("%d",&p2.age);
    scanf("%f",&p2.salary);

    printf("%d\n",p1.age);
    printf("%.2f\n",p1.salary);
    printf("%d\n",p2.age);
    printf("%.2f\n",p2.salary);
}

