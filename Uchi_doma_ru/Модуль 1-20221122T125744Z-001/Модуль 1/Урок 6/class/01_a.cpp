#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    switch (a)
    {
        case 1: {printf("Большой\n"); break;}
        case 2: {printf("Указательный\n"); break;}
        case 3: {printf("Средний\n"); break;}
        case 4: {printf("Безымянный\n"); break;}
        case 5: {printf("Мизинец\n"); break;}
        default: {printf("Error\n");} 
    }
    return 0;
}
