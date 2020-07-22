/*冰雹猜想*/
#include <iostream>

#define N 10000
using namespace std;

int main() {
    int n;
    int a[N], cnt = 1;
    cin >> n;
    a[0] = n;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
            a[cnt] = n;
            cnt++;
        } else {
            n = n * 3 + 1;
            a[cnt] = n;
            cnt++;
        }
    }
    for (int i = cnt - 1; i >= 0; --i) {
        cout << a[i] << " ";
    }
    return 0;
}