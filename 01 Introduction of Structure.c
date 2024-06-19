//Structure is a user defined data type.
//Structure is a collection of different types of variables.

#include <stdio.h>

//Structure Declaration
struct Person
{
    int age;       //Member of structure
    float salary;  //Member of structure
};


int main()
{
    struct Person person1, person2;

    person1.age = 25;
    person1.salary = 250.50;

    printf("Person_01: \n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n\n",person1.salary);

    person2.age = 30;
    person2.salary = 300.50;

    printf("Person_02: \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);
}
