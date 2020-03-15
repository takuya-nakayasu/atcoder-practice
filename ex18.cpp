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
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            result.at(i).at(j) = '-';

            for (int k = 0; k < M; k++)
            {
                if (A[k] == i + 1 && B[k] == j + 1)
                {
                    result.at(i).at(j) = 'o';
                }
                else if (A[k] == j + 1 && B[k] == i + 1)
                {
                    result.at(i).at(j) = 'x';
                }
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << result.at(i).at(j);
            if (j == (N - 1))
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
