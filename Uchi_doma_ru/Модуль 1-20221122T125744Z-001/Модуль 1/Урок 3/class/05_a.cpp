 #include <iostream>
 #include <stdio.h>
 using namespace std;
 int main()
 {
    int num;
    scanf("%d", &num);
    if (num > 0 and num % 2 == 0)
    {
        printf("Число %d- подходит.", num);
    }
    return 0;
 }