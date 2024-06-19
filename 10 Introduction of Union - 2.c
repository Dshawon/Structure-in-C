#include <stdio.h>

union Test
{
    int x,y;
};

int main()
{
    union Test t1;

    t1.x=10;
    printf("x = %d\n",t1.x); //x=10
    printf("y = %d\n",t1.y); //y=10

    t1.y=20;
    printf("x = %d\n",t1.x); //x=20
    printf("y = %d\n",t1.y); //y=20
}
