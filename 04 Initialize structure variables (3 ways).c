#include <stdio.h>

struct Person
{
    int age;
    float salary;
};

int main()
{
    //Directly assignment
    struct Person p1={27,270.40}, p2, p3;

    //Element-wise assignment
    p2.age = 29;
    p2.salary = 290.50;

    //Variable assignment
    p3 = p2;

    printf("%d\n",p1.age);
    printf("%.2f\n",p1.salary);
    printf("%d\n",p2.age);
    printf("%.2f\n",p2.salary);
    printf("%d\n",p3.age);
    printf("%.2f\n",p3.salary);
}


