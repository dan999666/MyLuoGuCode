/*校门外的树*/
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int l, m, u, v, cnt = 0;
    cin >> l >> m;
    int a[l + 1];
    /*for (int i = 0; i <= l; ++i) {
        a[i] = 0;
    }*/
    memset(a, 0, sizeof(a));
    for (int j = 1; j <= m; ++j) {
        cin >> u >> v;
        for (int i = u; i <= v; ++i) {
            if (a[i] == 0) a[i]++;
        }
    }
    for (int k = 0; k <= l; ++k) {
        if (a[k] == 0) cnt++;
    }
    cout << cnt;
    return 0;
}