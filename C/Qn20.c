#include <stdio.h>
int main()
{
    int a = 90, *ptr = &a;
    *ptr = 5;
    printf("%d", *ptr);
    return 0;
}