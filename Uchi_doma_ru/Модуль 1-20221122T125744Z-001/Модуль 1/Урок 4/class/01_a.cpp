#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    char ans;
    printf("Уроки сделаны?");
    scanf("%s", &ans);
    if (ans == 'y')
    {
        printf("Молодец!");
    }
    else
    {
        printf("Иди учись!");
    }
    return 0;
}