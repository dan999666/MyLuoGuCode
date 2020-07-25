/*珠心算测验*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a[1000], b[1000], cnt = 0;

    //get input
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        b[i] = a[i];
    }

    //compare value three loop
    for (int j = 0; j < n; ++j) {
        for (int i = j + 1; i < n; ++i) {
            for (int k = 0; k < n; ++k) {
                if (b[k] == a[j] + a[i]) {
                    cnt++;
                    b[k] = 0;
                }
            }
        }
    }

    cout <<
         cnt;
    return 0;
}