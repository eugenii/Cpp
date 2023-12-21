#include <stdio.h>
int main()
{
    int s = 0, number;
    scanf("%d", &number);
    while (number != 0)
    {
        s += number;
        scanf("%d", &number);
    }
    printf("%d", s);
    return 0;
}