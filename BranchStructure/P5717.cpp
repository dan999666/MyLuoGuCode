/*
 * https://www.luogu.com.cn/problem/P5717*/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int num[4] = {0, a, b, c};
    sort(num + 1, num + 4);

    if (num[1] + num[2] < num[3]) {
        cout << "Not triangle";
    }

    if (num[1] * num[1] + num[2] * num[2] == num[3] * num[3]) {
        cout << "Right triangle" << endl;
    } else if (num[1] * num[1] + num[2] * num[2] > num[3] * num[3]) {
        cout << "Acute triangle" << endl;
    } else if (num[1] * num[1] + num[2] * num[2] < num[3] * num[3]) {
        cout << "Obtuse triangle" << endl;
    }

    if (a == b && b == c && a == c) {
        cout << "Equilateral triangle" << endl;
    }
    if (a == b || b == c) {
        cout << "Isosceles triangle" << endl;
    }
}