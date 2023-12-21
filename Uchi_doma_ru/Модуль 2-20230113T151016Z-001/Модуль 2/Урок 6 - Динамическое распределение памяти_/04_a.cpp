#include <stdio.h>
#include <malloc.h>
#include <iostream>
int main()
{
    int *a;
    int i, n;
    int max, min;
    printf("Enter size of array: ");
    scanf("%d", &n);
    a = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < n -1 - j; k++)
        {
            if (a[k] < a[k + 1]) std::swap(a[k], a[k + 1]);
        };
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    free(a);
    return 0;
}