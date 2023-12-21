 #include <stdio.h>
 int main()
 {
    int a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[i][j] = (i + 1) * (j + 1);
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
 }