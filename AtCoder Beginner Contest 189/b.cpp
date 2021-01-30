#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int X;
    cin >> N >> X;
    vector<int> V(N);
    vector<int> P(N);

    for (int i = 0; i < N; i++)
    {
        cin >> V.at(i) >> P.at(i);
    }

    int drunked = -1;
    int a = 0;

    for (int i = 0; i < N; i++)
    {
        if (P.at(i) != 0 && V.at(i) != 0)
        {
            a += V.at(i) * ((double)P.at(i) / 100);
        }
        else
        {
            a += 0.0;
        }

        if (a > X)
        {
            drunked = ++i;
            break;
        }
    }

    cout << drunked << endl;
}