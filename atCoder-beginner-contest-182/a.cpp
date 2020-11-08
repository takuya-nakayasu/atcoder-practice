#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C, answer;

    cin >> A >> B;

    C = (2 * A) + 100;

    answer = C - B;

    answer = answer < 0 ? 0 : answer;

    cout << answer << endl;
}