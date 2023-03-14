#include <iostream>
#include <stdio.h>
int main()
{
    int num, amount;
    scanf("%d", &num, &amount);
    printf("%d", (num - (amount % num)) % num);
    return 0;
}
