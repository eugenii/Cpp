#include <stdio.h>
int main()
{
    int data[10];
    int key, index = -1, count = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &data[i]);
    }
    scanf("%d", &key);
    for (int i = 0; i < 10; ++i)
    {
        count = i + 1;
        if (data[i] == key)
        {
            printf("%d\n", i);
            break;
        }
    }
    
    printf("%d", count);
    return 0;
}