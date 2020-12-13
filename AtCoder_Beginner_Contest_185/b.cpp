#include <bits/stdc++.h>
using namespace std;

int main()
{
    int64_t N, M, T, index, n;
    cin >> N >> M >> T;
    vector<int> S(M);
    vector<int> END(M);

    for (int i = 0; i < M; i++)
    {
        cin >> S.at(i) >> END.at(i);
    }

    index = 0;
    n = N;

    for (double i = 0.5; i <= T; i = i + 0.5)
    {
        if (!(index >= S.size()) && i >= S.at(index) && i <= END.at(index))
        {
            if (fmod(i / 0.5, 2) == 1)
            {
                if (N != n)
                {
                    n++;
                }
            }
        }
        else
        {
            if (fmod(i / 0.5, 2) == 1)
            {
                n--;
            }
        }

        if (!(index >= S.size()) && i == END.at(index))
        {
            index++;
        }

        if (n == 0)
        {
            break;
        }
    }

    if (n == 0)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
}