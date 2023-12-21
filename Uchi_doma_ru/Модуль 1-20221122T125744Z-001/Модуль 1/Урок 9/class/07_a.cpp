/*#include <stdio.h>
int main()
{
     int age = 0; 
     int maxAge = 0; 
     int minAge = 100;
     float sum = 0;   
     float average = 0; 
     int amount = 0; 
     
     printf("Введите количество учеников: "); 
     scanf("%d",&amount);
     
     for (int i = 0; i < amount; i++)
     {
         printf("Введите возраст ученика "); 
         scanf("%d",&age);
         if (age > maxAge) maxAge = age; 
         if (age < minAge) minAge = age;
         sum += age; 
     }
     average = sum / amount; 
     printf("%d\n",maxAge);
     printf("%d\n",minAge);
     printf("%f\n",average);
     
     return 0;
}
*/
#include <stdio.h>
// using namespace std;
int main()
{
    int number, age, oldest = 0, youngest = 100;
    float average;
    scanf("%d", &number);
    for (int i = 0; i < number; i++)
    {
        scanf("%d", &age);
        if (oldest < age) {oldest = age;}
        if (youngest > age) {youngest = age;}
        average += age;

    }
    printf("%d\n", oldest);
    printf("%d\n", youngest);
    printf("%f\n", average / number);
    return 0;
}
