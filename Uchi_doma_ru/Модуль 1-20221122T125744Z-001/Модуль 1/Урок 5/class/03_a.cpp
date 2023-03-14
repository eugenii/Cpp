#include <stdio.h>
int main()
{
    char ans;
    printf("Вам нужны фрукты?\n");
    scanf("%s", &ans);
    if (ans == 'y') 
    {
        printf("Цитрусовые?\n");
        scanf("%s", &ans);
        if (ans == 'y') printf("Апельсин");
        else printf("Яблоки");
    }
    else
    {
        printf("Вам нужны корнеплоды?");
        scanf("%s", &ans);
        if (ans == 'y') printf("Картофель");
        else printf("Капуста");
    }
    return 0;
}