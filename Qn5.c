#include <stdio.h>

int extern i;

void main()
{
    printf("%d", i);
}

int i = 10;