/* 
* 
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char card_name[3];
    int val = 0;
    puts("Введите карту: ");
    scanf("%2s", card_name);
    printf("%c", card_name[0]);
    if (card_name[0] == 'K' || card_name[0] == 'Q' || card_name[0] == 'J')
    {
        val = 10;
    }
    else if (card_name[0] == 'A')
    {
        val = 11;
    }
    else 
    {
        val = atoi(card_name);
    }
    printf("Ценность карты: %i\n", val);
    return 0;
}