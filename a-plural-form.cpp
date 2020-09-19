#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 整数の入力
    string S;
    cin >> S;

    if (S.at(S.size() - 1) == 's')
    {
        cout << S + "es" << endl;
    }
    else
    {
        cout << S + "s" << endl;
    }
    return 0;
}