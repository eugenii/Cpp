#include <stdio.h>
struct time
{
    int hour;
    int minute;
    int second;
};
struct time addminutes(struct time, int);  // прототип функции
 
int main(void)
{
    int minutes;
    struct time current_time;
    printf("Часы:");
    scanf("%d",&current_time.hour);
    printf("Минуты:");
    scanf("%d",&current_time.minute);
    printf("Секунды:");
    scanf("%d",&current_time.second);
    printf("Сколько добавить минут:");
    scanf("%d",&minutes);
    
    struct time result_time = addminutes(current_time, minutes);
    printf("%d:%d:%d \n", result_time.hour, result_time.minute, result_time.second);
    return 0;
}
struct time addminutes(struct time t, int minutes)
{
    struct time result ={t.hour, t.minute, t.second};
    int h, d;
    result.minute += minutes;   // прибавляем минуты
    if(result.minute >=60)      // если минут больше 59, делим на 60
    {
        h = result.minute / 60;
        result.minute -= 60 * h;    // от минут вычитаем 60 * h
        result.hour +=h;            // к часам прибавляем h
    }
    if(result.hour >=24)        // если часов больше 23, делим на 24
    {
        d = result.hour / 24;    // от часов вычитаем d * 24
        result.hour -= 24 * d;
    }
    return result;
}