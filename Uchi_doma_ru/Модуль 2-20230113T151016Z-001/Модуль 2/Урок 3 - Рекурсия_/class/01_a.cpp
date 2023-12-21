#include <stdio.h>
int F(int n)
{
    if (n == 1) return 3;
    else {
        return F(n - 1) * (n - 1);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("F(%d)=%d", n, F(n));
    return 0;
}