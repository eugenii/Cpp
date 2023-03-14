#include <iostream>
using namespace std;
int main()
{
    int k, n;  // k - na 1 stranice, n - vsego stranic
    cin >> k >> n; 
    cout << (n + k - 1) / k << endl;
    cout << n - (n -1) / k * k;
    return 0;
}