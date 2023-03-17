#include <stdio.h>

void foo(int *);

int main()
{
    int i = 10;
    // foo((&i)++);  //C.E.
}
void foo(int *p)
{
    printf("%d\n", *p);
}