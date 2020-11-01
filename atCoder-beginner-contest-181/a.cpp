#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    string clothes = "Black";
    cin >> N;

    if (N % 2 == 0)
    {
        clothes = "White";
    }

    cout << clothes << endl;
}