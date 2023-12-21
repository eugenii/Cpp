#include <stdio.h>
int F(int n)
{
    if (n == 1) return 1;
    else return F(n - 1) * F(n - 1) - F(n - 1) * n + 2 * n;
}
int main()
{
    int n;
    // printf("n=");
    scanf("%d", &n);
    printf("%d", F(n));
    return 0;
}