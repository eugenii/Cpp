#include <stdio.h>

int st(int a, int n)
{
    int s = 1;  
    for (int i  = 0; i < n; i++)
    {
        s = s * a;
    }
    return s;
}
int main()
{
    int a, n;
    scanf("%d %d", &a, &n);
    printf("%d", st(a, n));
    return 0;
}