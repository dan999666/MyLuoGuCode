/*https://www.luogu.com.cn/problem/P1909
*/

#include <iostream>
#include <cmath>

using namespace std;
int n, ans = 2000000000, a, b, r;

int main() {
    cin >> n;
    for (int i = 0; i < 3; ++i) {
        cin >> a >> b;
        r = ceil(n * 1.0 / a) * b;//ceil向上取整函数
        ans = min(r, ans);//取最小值函数
    }
    cout << ans;
}

//int main() {
//    int x, y = 65, z;
//    x = ceil(y * 1.0 / 4);
//    cout << x;
//}