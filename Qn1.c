#include <stdio.h>

void main()
{
    int count = 0;
    for (;;)
    {
        if (count == 10)
            break;
        printf("% d", ++count); // Ans: 1 2 3 4 5 6 7 8 9 10
    }
}