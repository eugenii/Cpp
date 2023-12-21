#include <iostream>
using namespace std;
int main()
{
    int c = 0, s = 0, number;
    // cin >> number;
    // scanf("%d", &number);
    while (s <= 100)
    {
        cin >> number;
        s += number;
        c++;
        //scanf("%d", number);
    }
    cout << c << endl << s;
    return 0;
}