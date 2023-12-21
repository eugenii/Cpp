#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int n, out = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if (i % 3 == 0) {out += i;}
    }
    printf("%d", out);
    return 0;
}