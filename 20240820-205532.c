#include <iostream>

using namespace std;

int main() {
    // 定义变量
    double num1, num2, sum;

    // 提示用户输入两个数字
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // 计算加法
    sum = num1 + num2;

    // 输出结果
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;

    return 0;
}
