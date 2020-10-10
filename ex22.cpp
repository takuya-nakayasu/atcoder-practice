#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int count = 0;
    vector<pair<int, int>> v;

    for (int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;

        v.push_back(make_pair(b, a));
    }
    sort(v.begin(), v.end());

    for (pair<int, int> p : v)
    {
        int a, b;
        tie(b, a) = p;
        cout << a << " " << b << endl;
    }
}
