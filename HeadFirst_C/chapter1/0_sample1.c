#include <stdio.h>

int main()
{
    int decks;
    puts("¬ведите количесвто колод: ");
    scanf("%i", &decks);
    if (decks > 1)
    {
        puts("You  have entered not real number of decks");
        return 1;
    }
    printf("Total amount %i card(s)", decks * 52);
    return 0;
}