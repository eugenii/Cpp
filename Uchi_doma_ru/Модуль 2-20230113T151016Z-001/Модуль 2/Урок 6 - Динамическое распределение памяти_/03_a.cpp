#include <stdio.h>
#include <malloc.h>
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
        if (i == 0)
        {
            max = a[i];
            min = a[i];
        }
        else
        {
            if (a[i] > max) max = a[i];
            if (a[i] < min) min = a[i];
        }
    }
    // print out array elements
    //for (i = 0; i < n; i++)
    printf("%d\n%d",max, min);
    free(a);
    return 0;
}