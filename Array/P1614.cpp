/* 间隔最小值
 * 下标取值
 * i [0, n-m]
 * j [i, i+m]
 * */
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, a[100001], ans = 1000000, tmp = 0;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i <= n - m; ++i) {
        tmp = 0;
        for (int j = i; j < i + m; ++j) {
            tmp += a[j];
        }
        //cout << tmp << endl;
        if (ans > tmp) {
            ans = tmp;
        }
    }
    cout << ans;
    return 0;
}
