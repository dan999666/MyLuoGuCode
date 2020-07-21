/* 打分
 * error*/

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    int a[n+1];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int j = 1; j < n - 1; ++j) {
        sum += a[j];
    }
    float ans = sum / (n - 2);
    printf("%.2lf", ans);
}