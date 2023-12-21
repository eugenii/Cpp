#include <stdio.h>
void func(int*);
int main()
{
    int x;
    scanf("%d", &x);
    func(&x);
    printf("%d", x);
    return 0;
}
void func(int* x)
{
    (*x)*2;
    printf("x from func: %d\n", *x);
}