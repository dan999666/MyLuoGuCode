/*https://www.luogu.com.cn/problem/P2669*/
#include <iostream>

using namespace std;

int main() {
    int n, salary = 0, count = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            salary += i;
            count++;
            if (count == n) {
                cout << salary;
            }
        }
    }
    return 0;
}

