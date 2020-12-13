#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A1, A2, A3, A4;
    cin >> A1 >> A2 >> A3 >> A4;
    vector<int> vec(4);
    vec.at(0) = A1;
    vec.at(1) = A2;
    vec.at(2) = A3;
    vec.at(3) = A4;
    sort(vec.begin(), vec.end());

    cout << vec.at(0) << endl;
}