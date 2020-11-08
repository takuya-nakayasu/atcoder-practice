#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;

    int two = 2;
    int three = 3;
    int five = 5;

    cin >> N;

    vector<int> A(N);
    vector<int> B(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A.at(i);
    }

    int max = 0;
    int max_2 = 0;
    int max_3 = 0;
    int max_5 = 0;
    int max_13 = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (A.at(j) % A.at(i) == 0)
            {
                max++;
            }
        }
        B.at(i) = max;
        max = 0;
    }

    for (int i = 0; i < N; i++)
    {
        if (A.at(i) % 2 == 0)
        {
            max_2++;
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (A.at(i) % 3 == 0)
        {
            max_3++;
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (A.at(i) % 5 == 0)
        {
            max_5++;
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (A.at(i) % 13 == 0)
        {
            max_13++;
        }
    }

    int answer = B.at(0);
    int index = 0;

    for (int i = 1; i < N; i++)
    {
        if (answer < B.at(i))
        {
            answer = B.at(i);
            index = i;
        }
    }

    int f_answer = A.at(index);

    if (answer < max_2)
    {
        f_answer = 2;
    }

    if (answer < max_3)
    {
        f_answer = 3;
    }

    if (answer < max_5)
    {
        f_answer = 5;
    }
    if (answer < max_13)
    {
        f_answer = 13;
    }

    cout << f_answer << endl;
}