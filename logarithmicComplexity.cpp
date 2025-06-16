#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    // for (int i = 1; i <= num; i *= 2)
    // {
    //     cout << i << endl;
    // }

    for (int i = num; i >= 1; i /= 3)
    {
        cout << i << endl;
    }

    return 0;
}