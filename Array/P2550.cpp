/*彩票摇奖*/
#include <iostream>
#include <cstring>

using namespace std;

int a[34], b[7], cnt, n, x;//a标记中奖号码1-33号，b保存每一组彩票号码的中奖情况，cnt保存每一组彩票相同的个数，n表示小明买了n组彩票，x读入的中奖号码

int main() {
    cin >> n;
    //标记中奖号码
    for (int i = 1; i <= 7; ++i) {
        cin >> x;
        a[x] = 1;
    }
    //将数组b置为0
    memset(b, 0, sizeof(b));
    //依次读取n组数据
    for (int j = 1; j <= n; ++j) {
        //读取其中一组数据
        cnt = 0;
        for (int i = 1; i <= 7; ++i) {
            cin >> x;
            if (a[x] == 1) {
                cnt++;
            }
        }
        b[7 - cnt]++;
    }
    //输出数组b
    for (int k = 0; k < 7; ++k) {
        cout << b[k] << " ";
    }
}