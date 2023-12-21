#include <stdio.h>
int main()
{
    int data[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (data[i] % 3 == 0) count++;
    }
    printf("%d", count);
    return 0;
}