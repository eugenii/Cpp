#include <stdio.h>
int F(int n)
{
    if (n == 1) return 0;
    else return F(n - 1) + n;
}
int G(int m)
{
    if (m == 1) return 1;
    else return G(m - 1) * m;
}
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d", F(n) + G(m));
    return 0;
}