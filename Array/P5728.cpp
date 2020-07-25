/*旗鼓相当的对手*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[10000][5], cnt = 0, n;
    //get input
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i][1] >> a[i][2] >> a[i][3];//获取三科成绩
        a[i][4] = a[i][1] + a[i][2] + a[i][3];//a[i][4]为三科成绩的和
    }
    //deal with the array O(n*n)
    for (int j = 0; j < n; ++j) {
        for (int k = j + 1; k < n; ++k) {
            if (abs(a[j][1] - a[k][1]) <= 5 && abs(a[j][2] - a[k][2]) <= 5 && abs(a[j][3] - a[k][3]) <= 5 &&
                abs(a[j][4] - a[k][4]) <= 10) {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}