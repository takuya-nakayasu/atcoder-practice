#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int64_t sum = 0;
    cin >> N;

    vector<int64_t> A(N);
    vector<int64_t> B(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A.at(i) >> B.at(i);
    }

    for (int i = 0; i < N; i++)
    {

        sum += (A.at(i) + B.at(i)) * (B.at(i) - A.at(i) + 1) / 2;
    }

    cout << sum << endl;
}