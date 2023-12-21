#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[i][j] = (i + 1) * (j + 1);
        }
        swap(a[i][i], a[i][2]);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}