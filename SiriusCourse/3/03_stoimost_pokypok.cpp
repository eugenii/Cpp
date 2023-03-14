#include <iostream>
using namespace std;
int main()
{
    long a, b, n;
    cin >> a >> b >> n;
    long temp = ((a * 100 + b) * n);
    cout <<  temp / 100 << " " << temp % 100;
    return 0;
}