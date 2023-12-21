#include <iostream>
using namespace std;

int main()
{
    char name[80];
    cin.getline(name, 20);
    cout << "Привет, " << name << "!" << endl;
    return 0;
}