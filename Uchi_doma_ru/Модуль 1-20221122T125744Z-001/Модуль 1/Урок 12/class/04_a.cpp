#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int data[10];
    int ind, min;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &data[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        min = i;
        for (int j = i + 1; j < 10; j++)
        {
            if (data[j] < data[min])
            {
                swap(data[j], data[min]);
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", data[i]);
    }
    return 0;
}