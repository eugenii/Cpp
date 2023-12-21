#include <stdio.h>
int main()
{
    int n, out = 1;
    scanf("%d", &n);
    for (int i = 1; i < n + 1; i++)
    {
        out *= i;
    }
    printf("%d", out);
    return 0;
}