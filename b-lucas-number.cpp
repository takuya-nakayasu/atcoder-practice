#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 整数の入力
    int N;
    cin >> N;
    vector<int64_t> L(N + 1);

    if (N == 1)
    {
        L.at(N) = 1;
    }
    else
    {
        L.at(0) = 2;
        L.at(1) = 1;
        for (int i = 2; i <= N; i++)
        {
            L.at(i) = L.at(i - 1) + L.at(i - 2);
        }
    }
    cout << L.at(N) << endl;
    return 0;
}