/*攒钱
 * 目标  n元
 * 周一 x+k
 * 周二 x+2k
 * */
#include <iostream>

using namespace std;

int main() {
    int n, x, k, s;
    cin >> n;
    for (k = 1;; ++k) {
        for (x = 100; x > 0; x--) {
            s = (7 * x + 21 * k) * 52;
            if (s == n) {
                cout << x << endl << k << endl;
                return 0;
            }
        }
    }
}

