#include <stdio.h>
int main()
{
    int data[10] = {};
    int min, max;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &data[i]);
        if (i == 0)
        {
            min = data[0]; max = data[0];
        }
        if (data[i] < min)
        {
            min = data[i];
        }
        if (data[i] > max)
        {
            max = data[i];
        }

    }
    printf("%d\n%d", max, min);
    return 0;
}