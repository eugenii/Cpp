#include <iostream>
using namespace std;
int main()
{
    int time, h, minutes;
    cin >> time;
    h = time / 60;
    minutes = time % 60;
    cout << h << " " << minutes;
    return 0;
}