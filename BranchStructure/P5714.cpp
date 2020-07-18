/*https://www.luogu.com.cn/problem/P5714
 * */
#include <iostream>

using namespace std;

int main() {
    float m, h;
    cin >> m >> h;
    float BMI = m / (h * h);
    if (BMI < 18.5) {
        cout << "Underweight";
    } else if (BMI >= 18.5 && BMI < 24) {
        cout << "Normal";
    } else if (BMI >= 24) {
        cout << BMI << endl;
        cout << "Overweight";
    }
    return 0;
}