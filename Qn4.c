#include <stdio.h>

void fun(int *p)
{
    static int q = 10;
}

void main()
{
    int r = 20;
    int *p = &r;
    fun(p);
    printf("%d", *p); // Ans: 20
}