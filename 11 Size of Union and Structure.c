#include <stdio.h>

union Test1
{
    int x,y;
};

union Test2
{
    char ch;
    int x;
};

union Test3
{
    char name[20];
    double d;
};

struct Test4
{
    char ch;
    int x;
    int y;
};

int main()
{
    union Test1 t1;
    union Test2 t2;
    union Test3 t3;
    struct Test4 t4;

    printf("%d\n",sizeof(t1)); //4
    printf("%d\n",sizeof(t2)); //4
    printf("%d\n",sizeof(t3)); //24
    printf("%d\n",sizeof(t4)); //12
}
/*
সেহেতু t3 = 20
এবং t4 = 09 হওয়ার কথা!!

এর কারন হচ্ছে  test3  এর জন্য মেম্বার ছিল স্ট্রিং এবং  double. Memory Allocation এর ক্ষেত্রে   একটা একটা করে বিট  allocate করা যায় না |
double থাকার কারনে output 8 এর গুনিতক আকারে এসেছে |  মেমোরি এর মধ্যে ২৪ ব্লক এর মধ্যে 20 টা ব্লক data দিয়ে allocate করা থাকবে আর বাকি 4  টা ব্লক empty  থাকবে |

আবার  দেখা যাচ্ছে  test4 এর মেম্বার এর ডাটা টাইপ ছিল  int , int , char |
তাই এখানে 4 এর গুনিতক আকারে মেমোরি allocate হয়েছে | Expected Output 9  আসার কথা থাকলে ও Dynamic Memory Allocation এর জন্য   Compiler থেকে প্রাপ্ত  output হবে 12 !!

[[ মোট কথা গুণিতক আকারে বাইট হিসাব হবে ]]

*/

