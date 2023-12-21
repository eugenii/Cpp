#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int data[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &data[i]);
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (data[j] < data[j + 1])
            {swap(data[j], data[j + 1]);} 
        }
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", data[i]);
    }
    return 0;
}