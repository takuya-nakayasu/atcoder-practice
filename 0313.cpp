#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> data(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> data.at(i);
    }
    int tmp = -1;
    int cnt = 0;
    for (int i : data)
    {
        if (tmp == i)
        {
            cout << 'YES' << endl;
            break;
        }
        tmp = i;
        cnt++
    }

    if (cnt == 5)
    {
        cout << 'NO' << endl;
    }
}
