#include <iostream>
using namespace std;
int main()
{
    int login, password;
    //scanf("%d", &login);
    cout << "login: ";
    cin >> login;
    if (login == 123456)
    {
        //scanf("%d", password);
        cout << "password: ";
        cin >> password;
        if (password == 654321)
        {
            cout << "Access is allowed";
        }
        else {cout << "Error password";}
    }
    else {cout << "Error login";}
    return 0;
}