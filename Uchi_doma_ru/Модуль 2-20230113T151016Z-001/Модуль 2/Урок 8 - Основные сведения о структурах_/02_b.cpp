#include <stdio.h>
struct contact {
  char name[20];
  char surname[20];
  long int tel;
};
int main() {
  struct contact p1;
  printf("Введите Имя: ");
  scanf("%s", p1.name);
  printf("Введите Фамилию: ");
  scanf("%s", p1.surname);
  printf("Введите телефон: ");
  scanf("%li", &p1.tel);
  printf("Имя: %s\n",p1.name);
  printf("Фамилия: %s\n",p1.surname);
  printf("Телефон: %li\n",p1.tel);
  return 0;
}