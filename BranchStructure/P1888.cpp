/*
 * 输入一组勾股数a,b,c（a≠b≠c），用分数格式输出其较小锐角的正弦值。（要求约分。）
 * 约分需要使用最大公约数的知识点
 * https://www.luogu.com.cn/problem/P1888
 * */

#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int minLine = min(a, min(b, c));
    int maxLine = max(a, max(b, c));
    int common = gcd(minLine, maxLine);
    cout << minLine / common << "/" << maxLine / common;
}