#include <malloc.h>
#include <stdio.h>
 
void twice(int n, int *p)
{
    for(int i=0; i<n; i++)
        *p++ *= 2;
}
int main(void)
{
    int nums[10] = {0};
    int length=10;
    
    for(int i=0; i<length; i++)
    {
        printf("a[%d]=", i);
        scanf("%d",&nums[i]);
    }
     
    twice(length, nums); 
    for(int i=0; i<length; i++)
        printf("%d ", nums[i]); 
    return 0;
}