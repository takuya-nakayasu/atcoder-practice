#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X, Y, min_num;
    cin >> X >> Y;
    if (X > Y)
    {
        if (Y + 3 > X)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else
    {
        if (X + 3 > Y)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}