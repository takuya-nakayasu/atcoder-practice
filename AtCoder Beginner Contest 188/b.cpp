#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, sum;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A.at(i);
    }
    for (int i = 0; i < N; i++)
    {
        cin >> B.at(i);
    }

    sum = 0;

    for (int i = 0; i < N; i++)
    {
        sum += A.at(i) * B.at(i);
    }

    if (sum == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}