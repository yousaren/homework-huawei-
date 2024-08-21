#include <iostream>

using namespace std;

int main() {
    
    double num1, num2, sum;
    // 定义变量

    cout << "Enter the first number: ";
    cin >> num1;
	
    cout << "Enter the second number: ";
    cin >> num2;
	//输入两个数字
   
    sum = num1 + num2;
	// 计算加法
    
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;
	// 输出结果
    return 0;
}
