#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int num;
    scanf("%d", &num);
    if (num % 10 == 5)
    {
        printf("Число %d- заканчивается на 5.", num);
    }
    return 0;
}