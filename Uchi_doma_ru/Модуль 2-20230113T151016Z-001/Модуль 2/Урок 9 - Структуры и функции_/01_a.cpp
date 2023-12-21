#include <stdio.h>

struct time
{
    int hours;
    int minutes;
    int seconds;
};
int main()
{
    struct dt y_date;
    printf("Enter date: ");
    scanf("%d:%c:%d", &y_date.date, &y_date.month, &y_date.year);
    printf("your date is: %d of %c in %d year", y_date.date, y_date.month, y_date.year);
    return 0;
}