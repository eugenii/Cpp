#include <iostream>
using namespace std;
int main()
{
  int number, k=0;
  cin >> number;
  while (number != 0)
  {
    if (number % 2 == 0) k++;
    cin >> number;
  }
  cout << k;  
  return 0;
}
