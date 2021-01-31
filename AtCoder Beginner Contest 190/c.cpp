#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> A(M);
    vector<int> B(M);

    for (int i = 0; i < M; i++)
    {
        cin >> A.at(i) >> B.at(i);
    }

    int K;
    cin >> K;

    vector<int> C(K);
    vector<int> D(K);

    for (int i = 0; i < K; i++)
    {
        cin >> C.at(i) >> D.at(i);
    }
}