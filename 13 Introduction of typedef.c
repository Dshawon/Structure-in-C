
#include <stdio.h>

typedef struct Book
{
    char name[50];
    int price;
}bk;

int main()
{
    bk b1 = { "Amar Jibonkatha", 350 };
    printf("%s, %d\n", b1.name, b1.price);
}

//Mostly used for structure.

/*
1) Built-in data type (Like int,char,float) এর নাম পরিবর্তনের নিয়ম,,

        typedef int NUMBER;
        typedef long long ll;

*/
