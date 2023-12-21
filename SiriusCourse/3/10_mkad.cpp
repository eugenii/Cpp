#include <stdio.h>
int main()
{
    int v, t;
    scanf("%d %d", &v, &t);
    printf("%d", v * t % 109);
    return 0;
}