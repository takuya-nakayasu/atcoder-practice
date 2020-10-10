#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W, count;
    count = 0;

    cin >> H >> W;

    vector<vector<char>> futon(H, vector<char>(W));

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> futon.at(i).at(j);
        }
    }

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (i - 1 >= 0)
            {
                if (futon.at(i).at(j) == '.' && futon.at(i - 1).at(j) == '.')
                {
                    count++;
                }
            }
            if (j - 1 >= 0)
            {
                if (futon.at(i).at(j) == '.' && futon.at(i).at(j - 1) == '.')
                {
                    count++;
                }
            }
        }
    }

    cout << count << endl;
}