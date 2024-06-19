//Enumeration consists of integral constant.
//Enumeration means Counting (Starts from 0)

#include <stdio.h>

enum Week {Sat,Sun,Mon};

int main()
{
    enum Week d1, d2;
    d1 = Sat;
    d2 = Sun;
    printf("%d\n",d1+1);  //01
    printf("%d\n",d2+1);  //02
}
