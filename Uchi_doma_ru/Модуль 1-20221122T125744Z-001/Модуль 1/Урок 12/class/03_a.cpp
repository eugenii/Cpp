#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int data[10];
    int left = 0, right = 10, count = 1, index = -1, key, mid;
    for (int i = 0; i < 10; i++)
    {
        cin >> data[i];
        // scanf("%d", &data[i]);
    }
    cout << "key = ";
    cin >> key;
    // scanf("%d", &key);
    while (left <= right)
    {
        mid = (left + right) / 2;
        count += 1;
        if (data[mid] == key)
        {
            index = mid;
            printf("%d\n", index);
            break;
        }
        if (data[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    if (index == -1)
    {
        printf("%d\n", index);
    }
    printf("%d", count);
    return 0;
}