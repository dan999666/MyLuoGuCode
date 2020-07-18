/*https://www.luogu.com.cn/problem/P5719*/
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n, k, countA = 0, countB = 0;
    double A = 0, B = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) {
        if (i % k == 0) {
            A += i;
            countA++;
        } else {
            B += i;
            countB++;
        }
    }
    double ans1 = A / countA;
    double ans2 = B / countB;
    printf("%.1f %.1f", ans1, ans2);
    return 0;
}