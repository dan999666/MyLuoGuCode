/*输入年份和月份，输出这一年的这一月有多少天。需要考虑闰年。
 * https://www.luogu.com.cn/problem/P5716
 * */

#include <iostream>

using namespace std;

int main() {
    int year, month;
    cin >> year >> month;

    int day[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int runday[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        cout << runday[month] << endl;
    } else {
        cout << day[month] << endl;
    }
}