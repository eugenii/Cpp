#include <stdio.h>
int main()
{
    int data1[] = {0, 1, 2, 3, 4, 5, 6, 7, 9};
    int data2[10] = {0};
    int data3[10] = {0};
    int sum = 0, sum3 = 0;
    for (int i =0; i < 10; i++)
    {
        sum += data1[i];
    }
    for (int i = 0; i < 10; i++)
    {
        data2[i] = sum + i * 4;
    }
    for (int i = 0; i < 10; i++)
    {
        data3[i] = data1[i] + data2[i];
        sum3 += data3[i];
    }
    printf("%d", sum3);
    return 0; 
}