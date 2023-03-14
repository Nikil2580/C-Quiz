#include <stdio.h>
int main()
{
    void *ptr;
    ++ptr;
    printf("%u", ptr);
    return 0;
}