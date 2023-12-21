#include <stdio.h>

int points = 0;

bool solve(int a, int b)
{
    int res;
    printf("%d + %d=", a, b);
    scanf("%d", res);
    if (res == a + b) true;
    else return false;
}

void message(int a, int b)
{
    if (solve(a, b))
        {
            printf("Верно!\n");
            points += 1;
        }
        else ("Ошибка!\n");
}

bool victory(int tr)
{
    if (tr == points) return true;
    else return false;
}

int main()
{
    int d1[] = {1,2,3,4,5,6,7,8,9,10};
    int d2[] = {9,8,7,6,5,4,3,2,1,0};
    int tr = 0, tryings = 0;
    printf("Сколько очков для завершения тренировки?");
    scanf("%d", &tr);
    for (int i = 0; i < 10; i++)
    {
        solve(d1[i], d2[i]);
        tryings += 1;
        if (victory(tr)) break;
    }
    printf("Тренировка завершена\n");
    printf("Верных ответов %d из %d", tr, tryings);
    return 0; 
}