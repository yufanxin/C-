#include<iostream>
using namespace std;

int main() {
    int a[5], max;
    cout << "请输入四个数字：";
    cin >> a[1] >> a[2] >> a[3] >> a[4];
    max = a[a[a[1] > a[2] ? 1 : 2] > a[a[3] > a[4] ? 3 : 4] ? a[1] > a[2] ? 1 : 2 : a[3] > a[4] ? 3 : 4];
    cout << "最大值为：" << max << endl;
    return 0;
}