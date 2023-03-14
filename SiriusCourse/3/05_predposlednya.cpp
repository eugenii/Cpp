#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    num = num / 10;
    num = num % 10;
    printf("%d", num);
    return 0;
}