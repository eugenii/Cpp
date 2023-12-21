#include <stdio.h>
int F(int n)
{
    if (n == 1)
        return 1;
    if (n > 1)
        return F(n-1) * F(n-1) - F(n-1) * n + 2 * n;
    return 0;
}
int main()
{
  int n;
  printf("n= ");
  scanf("%d", &n);
  printf("%d\n",F(n)); 
  return 0;
}