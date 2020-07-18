/*https://www.luogu.com.cn/problem/P5720*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float n;
    int day = 1;
    cin >> n;
    while (n != 1) {
        n = floor(n * 1.0 / 2);
        day += 1;
    }
    cout << day;
    return 0;
}