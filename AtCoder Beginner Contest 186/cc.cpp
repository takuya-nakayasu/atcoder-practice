#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string ten, oct_s;
    bool hex_flg = false;

    int cnt = 0;

    for (int i = 1; i <= N; i++)
    {
        hex_flg = false;
        stringstream ss;
        ss << oct << i;
        oct_s = ss.str();
        ten = to_string(i);

        for (int j = 0; j < ten.size(); j++)
        {
            if (ten.at(j) == '7')
            {
                hex_flg = true;
                break;
            }
        }

        if (!hex_flg)
        {
            for (int j = 0; j < oct_s.size(); j++)
            {
                if (oct_s.at(j) == '7')
                {
                    hex_flg = true;
                    break;
                }
            }
        }

        if (!hex_flg)
        {
            cnt++;
        }
    }

    cout << cnt << endl;
}