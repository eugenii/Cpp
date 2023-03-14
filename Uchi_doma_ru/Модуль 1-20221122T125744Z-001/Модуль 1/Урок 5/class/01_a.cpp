#include <stdio.h>
int main()
{
    float s;
    scanf("%f", &s);
    if (s > 1000)
    {
        printf("Вы у нас впервые?");
        char a;
        scanf("%s", &a);
        if (a == 'y')
        {
            printf("%10.2f", s * 0.855);
        }
        else {printf("%10.2f", s * 0.9);}

    }
    else {printf("%10.2f", s);}
    return 0;
}