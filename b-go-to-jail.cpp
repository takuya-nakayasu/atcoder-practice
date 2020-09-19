#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int count = 0;

    for (int i = 0; i < N; i++)
    {
        int d1, d2;
        cin >> d1 >> d2;
        if (d1 == d2)
        {
            count++;
        }
        else
        {
            count = 0;
        }

        if (count == 3)
        {
            break;
        }
    }

    if (count == 3)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
