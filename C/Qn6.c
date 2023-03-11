#include <stdio.h>

int main()
{
    int a = 0;
    a = a++ + a++ - a++ + ++a;
    printf("%d\n", a);  // Ans: 3
    return 0;
}
