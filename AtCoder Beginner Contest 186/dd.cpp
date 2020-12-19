#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    int cnt = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> A.at(i);
    }

    for (int i = 1; i < N; i++)
    {
        cnt += abs(A.at(i - 1) - A.at(i));
    }

    cout << cnt << endl;
}