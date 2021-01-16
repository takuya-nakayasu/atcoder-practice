#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, C, no_prime, yes_prime;
    cin >> N >> C;
    vector<int> a(N);
    vector<int> b(N);
    vector<int> c(N);

    for (int i = 0; i < N; i++)
    {
        cin >> a.at(i) >> b.at(i) >> c.at(i);
    }

    no_prime = 0;
    yes_prime = 0;

    for (int i = 0; i < N; i++)
    {
        no_prime += (b.at(i) - a.at(i) + 1) * c.at(i);
    }

    for (int i = 0; i < N; i++)
    {
        yes_prime += (b.at(i) - a.at(i) + 1) * c.at(i);
    }
}