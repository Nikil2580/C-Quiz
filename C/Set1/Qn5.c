#include <stdio.h>

int extern i;

void main()
{
    printf("%d", i);   // Ans: 10
}

int i = 10;
