#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", num / 1000 + num / 100 % 10 + num / 10 % 10 + num % 10);
    return 0;
}