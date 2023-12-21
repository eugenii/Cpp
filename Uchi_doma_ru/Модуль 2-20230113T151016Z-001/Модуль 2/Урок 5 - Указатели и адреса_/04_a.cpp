#include <stdio.h>
int main()
{
    int a, b;
    int *p1, *p2;
    scanf("%d %d", &a, &b);
    p1 = &a; p2 = &b;
    if (a > b) *p1 += 2;
    else *p2 -= 2;
    printf("a=%d\nb=%d", a, b);
    return 0;
}