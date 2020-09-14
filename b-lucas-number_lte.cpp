#include <iostream>
using namespace std;

int64_t lucas_number(int64_t n)
{
    if (n == 0)
    {
        return 2;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return lucas_number(n - 1) + lucas_number(n - 2);
    }
}

int main()
{
    // 整数の入力
    int64_t n;
    cin >> n;
    cout << lucas_number(n) << endl;
    return 0;
}