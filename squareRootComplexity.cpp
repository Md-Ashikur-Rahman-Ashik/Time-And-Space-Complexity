#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    // for (int i = 1; i <= sqrt(num); i++)
    // {
    //     cout << i << endl;
    // }

    for (int i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            cout << i << " " << num / i << " ";
        }
    }

    return 0;
}