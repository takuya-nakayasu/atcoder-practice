#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, X;
    string S;
    cin >> N >> X;
    cin >> S;

    for (int i = 0; i < N; i++)
    {
        if (S.at(i) == 'x')
        {
            if (X == 0)
            {
                X = 0;
            }
            else
            {
                X--;
            }
        }
        else
        {
            X++;
        }
    }

    cout << X << endl;
}