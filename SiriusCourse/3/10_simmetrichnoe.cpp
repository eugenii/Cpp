#include <iostream>
using namespace std;
int main()
{
    int num;
    int a, b, c, d;
    cin >> num;
    d = num % 10;
    c = num / 10 % 10;
    b = num / 100 % 10;
    a = num / 1000 % 10;
    cout << a * 10 + b - (d * 10 + c) + 1;
    return 0;
}