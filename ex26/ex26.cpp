#include <bits/stdc++.h>
using namespace std;

// 問題文の形式でvec値を出力
void print_vec(vector<int> vec) {}

// 変数名を読み取りイコールを読み飛ばす
string read_name() {}

// int式の項を1つ読み取る。
// 数字ならその値を返し、そうでないなら変数として解釈し変数の値を返す
// var_int : intの変数を保持するmap
int read_int(map<string, int> &var_int) {}

// int式全体を読み取って計算する
// var_int : intの変数を保持するmap
int calc_int(map<string, int> &var_int) {}

// vec値を読み取る
// 最初の"["は読み取ってある前提であることに注意
// var_int : intの変数を保持するmap
vector<int> read_vec_val(map<string, int> &var_int) {}

// vec式の項を1つ読み取る
// vec値ならその値を返し、そうでないなら変数として解釈し変数の値を返す
// var_int : intの変数を保持するmap
// var_vec : vecの変数を保持するmap
vector<int> read_vec(map<string, int> &var_int, map<string, vector<int>> &var_vec) {}

// vec式全体を読み取って計算する
// var_int : intの変数を保持するmap
// var_vec : vecの変数を保持するmap
vector<int> calc_vec(map<string, int> &var_int, map<string, vector<int>> &var_vec) {}

int main()
{

    // 命令の行数を取得
    int N;
    cin >> N;

    map<string, int> var_int;         // intの変数を管理するmap
    map<string, vector<int>> var_vec; // vectorの変数を管理するmap

    // 行数分の処理
    for (int i = 0; i < N; i++)
    {

        // 命令を受け取る
        string s;
        cin >> s;

        // int命令の処理
        if (s == "int")
        {
            // 変数名を読み取る
            string name = read_name();
            // 右辺の式を計算して変数に代入
            var_int[name] = calc_int(var_int);
        }

        // vec命令の処理
        if (s == "vec")
        {
            // 変数名を読み取る
            string name = read_name();
            // 右辺の式を計算して変数に代入
            var_vec[name] = calc_vec(var_int, var_vec);
        }

        // print_int命令の処理
        if (s == "print_int")
        {
            // 式を計算して出力
            cout << calc_int(var_int) << endl;
        }

        // print_vec命令の処理
        if (s == "print_vec")
        {
            // 式を計算して出力
            print_vec(calc_vec(var_int, var_vec));
        }
    }
}
