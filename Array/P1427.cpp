/*小鱼的数字游戏*/
#include <iostream>

#define N 100000
using namespace std;

int main() {
    int n, a[N], cnt = 0;
    for (int i = 0;; ++i) {
        cin >> n;
        a[i] = n;
        if (n == 0) {
            break;
        }
        cnt++;
    }
    for (int j = cnt - 1; j >= 0; --j) {
        cout << a[j] << " ";
    }
    return 0;
}