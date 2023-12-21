#include <stdio.h>

struct date
{
    int day;
    char month[12];
    int year;
};


int main()
{
    struct date dr;
    scanf("%d", &dr.day);
    scanf("%s", dr.month);
    scanf("%d", &dr.year);
    printf("День рождения: %d\n", dr.day);
    printf("Месяц: %s\n", dr.month);
    printf("Год рождения: %d\n", dr.year);
    return 0;
}