#include <stdio.h>

struct contact
{
    char name[20];
    char surname[20];
    long int teleph;
};

int main()
{
    struct contact person;
    puts("Введите имя:");
    scanf("%s", person.name);
    puts("Введите фамилию: ");
    scanf("%s", person.surname);
    puts("Телефон: ");
    scanf("%i", &person.teleph);
    printf("Имя: %s\n", person.name);
    printf("Фамилия: %s\n", person.surname);
    printf("Телефон: %li\n", person.teleph);
    return 0;
}