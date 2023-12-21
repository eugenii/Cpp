#include <stdio.h>
int main()
{
	int m[10];
	int key,search=-1;
	for (int i=0;i<10;i++)
	{
	    scanf("%d",&m[i]);
	}
	printf("a=");
	scanf("%d",&key);
    for (int i = 0; i < 10; ++i)
        if(m[i]==key)
        {
            printf("%d\n",i);
            search=1;
            break;
        }
    if (search==-1) printf("%d\n",search);
	return 0;
}
