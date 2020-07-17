/*
 * https://www.luogu.com.cn/problem/P1055
 * */

#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int res = (s.at(0) - 48) * 1 + (s.at(2) - 48) * 2 + (s.at(3) - 48) * 3 + (s.at(4) - 48) * 4 + (s.at(6) - 48) * 5 +
              (s.at(7) -
               48) * 6 + (s.at(8) - 48) * 7 + (s.at(9) - 48) * 8 + (s.at(10) - 48) * 9;
    char right = res % 11 + 48;
    if (right > '9') right = 'X';
    if (right == s.at(12)) cout << "Right";
    else {
        for (int i = 0; i <= 11; i++) cout << s.at(i);
        cout << right;
    }
    return 0;
}

