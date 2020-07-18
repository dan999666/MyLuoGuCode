/*给出三个整数 a,b,c(0\le a,b,c \le 100)a,b,c(0≤a,b,c≤100)，要求把这三位整数从小到大排序
 *  https://www.luogu.com.cn/problem/P5715
 *  */

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int num[] = {a, b, c};
    sort(num, num + 3);
    for (int i = 0; i < 3; i++) cout << num[i] << " ";
    return 0;
}