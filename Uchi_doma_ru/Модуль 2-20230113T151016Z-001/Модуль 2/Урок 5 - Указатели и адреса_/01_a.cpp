#include <stdio.h>
int main()
{
    int a;
    int *prt = &a;
    *prt = 100;
    printf("%d", a);
    return 0;
}