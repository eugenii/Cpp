#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int *p1, *p2;
    scanf("%d %d", &a, &b);
    //a = 4; b = 5;
    p1 = &a; p2 = &b;
    *p1 *= 2;
    *p2 *= 2;
    swap(*p1, *p2);
    printf("a=%d\nb=%d", a, b);
    return 0;
}