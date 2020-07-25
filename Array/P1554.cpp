/*梦中统计*/
#include <bits/stdc++.h>

using namespace std;

int M, N, d[10], tmp = 0;

int main() {
    cin >> M >> N;

    memset(d, 0, sizeof(d));

    for (int i = M; i <= N; ++i) {
        //cout << i << endl;
        int z = i;
        while (z != 0) {
            tmp = z % 10;
            z = z / 10;
            d[tmp]++;
        }
    }

    for (int j : d) {
        cout << j << " ";
    }

    return 0;
}