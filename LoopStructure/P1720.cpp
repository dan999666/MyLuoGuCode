/* 月落乌啼算钱
 * https://www.luogu.com.cn/problem/P1720*/

#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
    int n;
    double F, a = 1, b = 1;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        a *= (1 + sqrt(5)) / 2;
    }
    for (int j = 1; j <= n; ++j) {
        b *= (1 - sqrt(5)) / 2;
    }
    F = (a - b) / sqrt(5);
    printf("%.2f", F);
    return 0;
}