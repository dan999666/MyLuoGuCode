/*https://www.luogu.com.cn/problem/P5722*/
#include <iostream>

using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        ans += i;
    }
    cout << ans;
    return 0;
}