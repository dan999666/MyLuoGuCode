/*最长连号*/
#include <iostream>
#define MAX 100000000
using namespace std;

int main() {
    int n, a[10001], ans = -MAX, count = 1;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    for (int j = 1; j <= n; ++j) {
        if (a[j + 1] - a[j] == 1) {
            count++;
        } else {
            count = 0;
        }
        if (count > ans) ans = count;
    }
    cout << ++ans;
    return 0;
}