#include <stdio.h>
int F(int n)
{
    if (n == 1)
        return 0;
    if (n > 1)
        return F(n-1) + n;
    return 0;
}
int G(int n)
{
    if (n == 1)
        return 1;
    if (n > 1)
        return G(n - 1) * n;
    return 0;
}
int main()
{
  int n,m;
  printf("n= ");
  scanf("%d", &n);
  printf("m= ");
  scanf("%d", &m);
  printf("%d\n",F(n)+G(m)); 
  return 0;
}