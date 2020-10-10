#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    cin >> N;

    vector<int> p(N);

    for (int i = 0; i < N; i++)
    {
        cin >> p.at(i);
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 200000; j++)
        {
            for (int k = 0; k <= i; k++)
            {
                if (p.at(k) != j)
                {
                }
            }
        }
    }
}