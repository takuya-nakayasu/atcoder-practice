#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Sx, Sy, Gx, Gy;
    cin >> Sx >> Sy >> Gx >> Gy;

    // 斜辺の長さ
    int x1 = Gx - Sx;
    int y1 = Gy - Sy;
    int c1 = x1 ^ 2 + y1 ^ 2;

    cout << sqrt(c1) << endl;
}