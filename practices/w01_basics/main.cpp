// w01 · 基础练习：求和、斐波那契、字符串反转
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    // 第 1 题：1 + 2 + ... + n
    int n = 0;
    cout << "输入 n（求和）: ";
    if (!(cin >> n)) return 0;

    long long sum = 0;
    for (int i = 1; i <= n; ++i) sum += i;
    cout << "1..n 求和 = " << sum << "\n";

    // 第 2 题：前 n 个斐波那契数
    cout << "输入 n（斐波那契，<= 50）: ";
    cin >> n;
    long long a = 1, b = 1;
    cout << "fib:";
    for (int i = 0; i < n; ++i) {
        cout << ' ' << a;
        long long c = a + b;
        a = b;
        b = c;
    }
    cout << "\n";

    // 第 3 题：读整行，输出长度与反转
    cin.ignore();  // 清掉上一次 cin >> 留下的换行
    cout << "输入一行字符串: ";
    string s;
    getline(cin, s);
    string r = s;
    reverse(r.begin(), r.end());
    cout << "长度 = " << s.size() << "\n";
    cout << "反转 = " << r << "\n";

    return 0;
}
