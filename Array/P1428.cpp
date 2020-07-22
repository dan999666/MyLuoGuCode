/*小鱼比可爱*/
#include <iostream>

using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int j = 0; j < n; ++j) {
        cnt = 0;
        for (int i = j; i >= 0; i--) {
            if (a[j] > a[i]) cnt++;
        }
        cout << cnt << " ";
    }
    return 0;
}