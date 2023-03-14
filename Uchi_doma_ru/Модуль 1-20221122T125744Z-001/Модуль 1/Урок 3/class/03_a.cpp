#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Число %d- чётное.", num);
    }
    return 0;
}