#include <stdio.h>
int main()
{
    int data[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int sum = 0;
    float average = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += data[i];
    }
    average = sum / 10;
    for (int i  = 0; i < 10; i++)
    {
        if (data[i] > average)
        {
            data[i] = 1;
        }
    } 
    sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += data[i];
    }
    printf("%d", sum);
    return 0;
}
