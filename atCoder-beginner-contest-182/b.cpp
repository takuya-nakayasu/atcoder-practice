#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    cin >> N;

    vector<int> A(N);
    vector<int> B(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A.at(i);
    }

    int max = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (A.at(j) % A.at(i) == 0)
            {
                max++;
            }
        }
        B.at(i) = max;
        max = 0;
    }

    int answer = B.at(0);
    int index = 0;

    for (int i = 1; i < N; i++)
    {
        if (answer < B.at(i))
        {
            answer = B.at(i);
            index = i;
        }
    }

    cout << A.at(index) << endl;
}