#include <iostream>
using namespace std;
int main()
{
    char op;
    int a, b;
    cin >> op >> a >> b;
    switch (op)
    {
        case '+': {cout << a + b << endl; break;}
        case '-': {cout << a - b << endl; break;}
        case '*': {cout << a * b << endl; break;}
        case '/': {
            if (b == 0) {printf("Деление на 0"); break;}
            else {cout << a / b << endl; break;}
        }
        default: {printf("Error\n"); break;}
    }
}