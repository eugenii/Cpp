#include <stdio.h>
int main()
{
    char a;
    printf("Уроки сделаны?");
    scanf("%s", &a);
    if (a == 'y')
    {
        printf("Молодец!");
    }
    return 0;
}