#include <stdio.h>
int main()
{
    int a;
    int *ptr = &a;
    int **ptr2 = &ptr;
    *ptr = 100;
    **ptr2 = 200;
    printf("%d", a);
    return 0;
}