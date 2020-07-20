/*
 * 数字反转
 * https://www.luogu.com.cn/problem/P1307*/
#include <iostream>
#include <cmath>

using namespace std;

int ans = 0;

int main() {
    int N;
    cin >> N;
    while (N) {
        ans = ans * 10 + N % 10;
        N /= 10;
    }
    cout << ans;
    return 0;
}