#include <stdio.h>
int main()
{
    FILE *fp;
    int x;
    if ((fp = fopen("1/f1.txt", "r")) == NULL)
    {printf("error"); return 0;}
    fscanf(fp, "%d", &x);
    fclose(fp);
    printf("%d", x * x);
    return 0;
}