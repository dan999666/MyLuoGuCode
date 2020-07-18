/*https://www.luogu.com.cn/problem/P1980*/
#include <iostream>

using namespace std;

int main() {
    int n, k, count = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) {
        int c = i;
        while (c != 0) {
            int temp = c % 10;
            c = c / 10;
            if (temp == k) count++;
        }
    }
    cout << count;
    return 0;
}