/*求三角形*/
#include <iostream>

using namespace std;

int main() {
    int n, k = 0, z = 0;
    cin >> n;
    //打印矩形
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            k++;
            if (k < 10) {
                cout << 0 << k;
            } else {
                cout << k;
            }
        }
        cout << "\n";
    }
    cout << "\n";

    //打印三角形
    for (int l = 1; l <= n; ++l) {
        //打印空格
        for (int i = 1; i <= n - l; ++i) {
            cout << "  ";
        }
        //打印数字
        for (int j = 1; j <= l; ++j) {
            z++;
            if (z < 10) {
                cout << 0 << z;
            } else {
                cout << z;
            }
        }
        cout << "\n";
    }
}