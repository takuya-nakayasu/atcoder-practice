#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;

    vector<vector<int>> A(H, vector<int>(W));

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> A.at(i).at(j);
        }
    }

    int min_num = A.at(0).at(0);

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (min_num > A.at(i).at(j))
            {
                min_num = A.at(i).at(j);
            }
        }
    }

    int cnt = 0;

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            while (min_num != A.at(i).at(j))
            {
                A.at(i).at(j)--;
                cnt++;
            }
        }
    }

    cout << cnt << endl;
}