#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 整数の入力
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int64_t productMax = a * c;

    for (int64_t i = a; i <= b; i++)
    {
        for (int64_t j = c; j <= d; j++)
        {
            if (i * j > productMax)
            {
                productMax = i * j;
            }
        }
    }
    cout << productMax << endl;
    return 0;
}