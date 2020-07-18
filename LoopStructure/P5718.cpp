/*https://www.luogu.com.cn/problem/P5718*/

#include <iostream>

using namespace std;

int main() {
    int n, ans = 1000000000;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int j = 0; j < n; j++) if (a[j] < ans) ans = a[j];
    cout << ans;
    return 0;
}