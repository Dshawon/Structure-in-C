#include <stdio.h>

struct Person
{
    int age;
    float sal;
};

int main()
{
    struct Person p1={27,270.40}, p2, p3;
    p2.age = 29;
    p2.sal = 290.50;
    p3 = p2;

    if(p1.age == p2.age && p1.sal == p2.sal)
        printf("Equal");
    else
        printf("Not equal");

    if(p2.age == p3.age && p2.sal == p3.sal)
        printf("Equal");
    else
        printf("Not equal");
}



