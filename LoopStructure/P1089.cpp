/*津津的储蓄计划*/
#include <iostream>

using namespace std;

int main() {
    int budge;//预算
    int money;//津津手头上的钱
    int save;//津津存的钱
    int flag = 1, month;
    for (int i = 1; i <= 12; ++i) {
        money += 300;
        cin >> budge;
        money -= budge;
        if (money < 0) {
            flag = 0;
            month = i;
            break;
        }
        save += money / 100;
        money %= 100;
    }
    if (flag) {
        money += save * 120;
        cout << money;
    } else {
        cout << -month;
    }
    return 0;
}