#include <stdio.h>
#include <malloc.h>
int main()
{
    int *a;
    int i, n;
    float sum = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    a = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        sum += a[i];
    }
    // print out array elements
    //for (i = 0; i < n; i++)
    printf("%8.2f ", sum / n);
    free(a);
    return 0;
}