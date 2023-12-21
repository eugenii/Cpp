#include <stdio.h>
int main()
{
	int m[10];
	int key,index;
	for (int i=0;i<10;i++)
	{
	    scanf("%d",&m[i]);
	}
	printf("a=");
	scanf("%d",&key);
    int left = 0;
    int right = 10;
    int search = -1; 
    while (left <= right) 
  {
    int mid = (left + right) / 2; 
    if (key == m[mid]) { 
      search = mid;
      index=mid;
      break;       
    }
    if (key < m[mid])    
      right = mid - 1;  
    else              
      left = mid + 1;   
  }
  if (search == -1)    
    printf("%d\n", search);
  else          
    printf("%d\n", index);
  return 0;
}
