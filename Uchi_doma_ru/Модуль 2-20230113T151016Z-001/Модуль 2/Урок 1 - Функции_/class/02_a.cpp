#include <stdio.h>

void m(int data[10])
{
    printf("data=> \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &data[i]);
    }
    printf("--------------------\n");
}

void d3(int data1[10], int data2[10], int data3[10])
{
    for (int i = 0; i < 10; i++)
    {
        if (data1[i] > data2[i]) data3[i] = data1[i];
        else data3[i] = data2[i];
    }
}

int main()
{
    int data1[10], data2[10], data3[10];
    m(data1);
    m(data2);
    d3(data1, data2, data3);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", data3[i]);
    }
    return 0;
}