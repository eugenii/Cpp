#include <stdio.h>
int main()
{
    int mark;
    scanf("%d", &mark);
    switch (mark)
    {
        case 2: {printf("Неудовлетворительно\n"); break;}
        case 3: {printf("Удовлетворительно\n"); break;}
        case 4: {printf("Хорошо\n"); break;}
        case 5: {printf("Отлично\n"); break;}
        default: {printf("Error\n"); break;}
    }
    
}