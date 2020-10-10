#include <bits/stdc++.h>
using namespace std;

int main()
{
    char S, T;

    cin >> S;
    cin >> T;

    if (S == 'Y')
    {
        if (T == 'a')
        {
            cout << "A" << endl;
        }
        else if (T == 'b')
        {
            cout << "B" << endl;
        }
        else
        {
            cout << "C" << endl;
        }
    }
    else
    {
        cout << T << endl;
    }
}