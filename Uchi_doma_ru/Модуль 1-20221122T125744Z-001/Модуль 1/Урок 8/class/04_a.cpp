#include <iostream>
using namespace std;
int main()
{
    int a, fracts=0;
    cin >> a;
    while (a != 0)
    {
        if (a % 5 == 0) fracts++;
        cin >> a;
    }
    cout << fracts;
    return 0;
}