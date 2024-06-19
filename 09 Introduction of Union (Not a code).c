Structure and Union is almost the same thing.
But the only Difference is,,(Example)


struct Test                    union Test
{                              {
    char ch;                       char ch;
    int x;                         int x;
    float y;                       float y;
};                             };

struct Test t1;                union Test t1;
t1 = 1+4+4 = 9bytes            t1 = 1,4,4 = 4bytes


union er memory size = maximum value of a member or
(Priority: char < int < float < double)
union same memory location share kore


