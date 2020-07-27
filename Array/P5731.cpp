/*蛇形矩阵*/
#include <iostream>

using namespace std;

int main() {
    int n, x = 0, y = 0, a[10][10];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            x++;
            a[i][j] = x;
        }
    }
    
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            cout << a[k][i] << " ";
        }
        cout << endl;
    }
    return 0;
}