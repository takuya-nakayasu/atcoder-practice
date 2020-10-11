#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    map<int, int> M;

    for (int i = 0; i < N; i++)
    {
        cin >> A.at(i);
    }

    for (int i = 0; i < N; i++)
    {
        if (M.count(A.at(i)))
        {
            M[A.at(i)] = ++M.at(A.at(i));
        }
        else
        {
            M[A.at(i)] = 1;
        }
    }

    int max = 0;
    int max_key;

    for (auto p : M)
    {
        auto v = p.second;
        if (v > max)
        {
            max = v;
            max_key = p.first;
        }
    }

    cout << max_key << " " << max << endl;
}