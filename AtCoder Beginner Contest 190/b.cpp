#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, S, D;
    cin >> N >> S >> D;
    vector<int> X(N);
    vector<int> Y(N);

    for (int i = 0; i < N; i++)
    {
        cin >> X.at(i) >> Y.at(i);
    }

    bool dameged = false;

    for (int i = 0; i < N; i++)
    {
        if (X.at(i) < S && Y.at(i) > D)
        {
            dameged = true;
            break;
        }
    }

    if (dameged)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}