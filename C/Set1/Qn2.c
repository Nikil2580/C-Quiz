#include <stdio.h>

void main()
{
    int x = 20, p = 10;
    printf("%*d", x, p); // Ans:                  10
    getchar();           //     18 spaces will be printed followed by 10 since * denotes the width of the output string
}
