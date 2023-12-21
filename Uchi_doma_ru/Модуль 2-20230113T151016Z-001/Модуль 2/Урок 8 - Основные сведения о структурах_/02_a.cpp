#include <stdio.h>

struct contact
{
    char name[20];
    char surname[20];
    char tel[20];
};
int main()
{
    struct contact one;
    printf("name: ");
    scanf("%s", one.name);
    printf("surname: ");
    scanf("%s", one.surname);
    printf("telephone: ");
    scanf("%s", one.tel);
    printf("contact: %s %s, telephone: %s.", one.name, one.surname, one.tel);
    return 0;
}