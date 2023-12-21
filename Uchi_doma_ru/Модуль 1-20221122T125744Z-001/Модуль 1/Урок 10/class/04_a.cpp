#include <stdio.h>
int main()
{
    int data[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int even_sum = 0;
    for (int i = 1; i < 10; i += 2)
    {
        even_sum += data[i];
    }
    printf("%d", even_sum);
    return 0;
}