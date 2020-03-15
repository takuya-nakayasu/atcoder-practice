#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    for (int i = 0; i < M; i++)
    {
        cin >> A.at(i) >> B.at(i);
    }

    // ここにプログラムを追記
    // (ここで"試合結果の表"の2次元配列を宣言)

    vector<vector<char>> result(N, vector<char>(N));

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (A.at(i) == result.at(i).at(i))
            {
                cout << 'o';
            }
            else if (B.at(i) == result.at(i).at(i))
            {
                cout << 'x';
            }
            else
            {
                cout << '-';
            }
            if (j == N)
            {
                cout << endl;
            }
            else
            {
                cout << " ";
            }
        }
    }
}
