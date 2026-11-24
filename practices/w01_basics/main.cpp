// w01 · 求和练习：1 + 2 + ... + n
#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cout << "输入 n: ";
    if (!(cin >> n)) return 0;

    long long sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    cout << "1.." << n << " 的和 = " << sum << endl;
    return 0;
}