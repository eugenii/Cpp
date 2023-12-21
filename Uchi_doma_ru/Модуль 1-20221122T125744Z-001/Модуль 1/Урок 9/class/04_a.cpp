#include <iostream>
using namespace std;
int main()
{
    int a, b, out = 1;
    cin >> a >> b;
    for (int i = 0; i < b; i++)
    {
        out *= a;
    }
    cout << out << endl;
    return 0;
}