#include <stdio.h>
int main()
{
    int a[3][3];
    int max_s = 0, max_index = 0, temp = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[i][j] = (i + 1) * (j + 1);
            temp += a[i][j];
        }
        if (max_s < temp)
        {
            max_index = i;
            max_s = temp;
        }
        temp = 0;
    }
    printf("%d\n", max_index);
    return 0;
}