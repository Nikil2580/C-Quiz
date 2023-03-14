#include <stdio.h>
int main()
{
    int iVal;
    void *ptr;
    iVal = 50;
    ptr = &iVal;
    printf("value =%d,size= %d\n", *(int *)ptr, sizeof(ptr));
}