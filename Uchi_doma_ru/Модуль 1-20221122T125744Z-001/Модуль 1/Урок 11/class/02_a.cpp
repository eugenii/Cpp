#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int a[4][4];
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            a[i][j] = i + j + 2;
            sum += a[i][j];
        }
    }
    printf("%d", sum);
    return 0;
}