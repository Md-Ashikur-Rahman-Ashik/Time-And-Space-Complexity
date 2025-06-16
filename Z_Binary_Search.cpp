#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arraySize, testcases;
    cin >> arraySize >> testcases;

    int integerArray[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        cin >> integerArray[i];
    }

    for (int i = 0; i < testcases; i++)
    {
        int desiredNumber, count = 0;
        cin >> desiredNumber;

        for (int i = 0; i < arraySize; i++)
        {
            if (integerArray[i] == desiredNumber)
            {
                count++;
                cout << "found" << endl;
                break;
            }
        }

        if (count == 0)
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}