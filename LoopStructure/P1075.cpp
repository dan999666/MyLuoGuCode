/*质因数分解*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = n - 1; i > sqrt(n); i--) {
        if (n % i == 0) {
            cout << i;
            break;
        }
    }
    return 0;
}