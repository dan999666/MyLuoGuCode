#include <iostream>

using namespace std;

int main() {
    int n, k = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) {
            k++;
            if (k < 10) {
                cout << 0 << k;
            } else {
                cout << k;
            }
        }
        cout << "\n";
    }
}