#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int i, number;
    int best;//手气最佳
    float total;

    cout << "请输入红包金额：";
    cin >> total;
    cout << "请输入抢红包人数：";
    cin >> number;
    /* 生成随机数 */
    // 设置种子
    srand((unsigned)time(NULL));
    float a[1024];//保存每个人的随机数。最多支持1024个人抢红包。
    float b[1024];//保存每个人获得的红包金额。
    float suma = 0;//随机数总和。
    float sumb = 0;//红包总和。
    int max = 0;
    for (i = 0; i < number; i++)
    {
        // 生成实际的随机数
        a[i] = rand() % 100;

        if (a[i] > max) {
            max = a[i];
            best = i;//获取手气最佳
        }
        suma += a[i];
    }

    for (i = 0; i < number - 1; i++)
    {
        b[i] = a[i] / suma * total;//按照随机数计算每个人实际获得的金额
        sumb += round(b[i] * 100) / 100.0;//将红包金额保留两位小数
        //输出信息
        cout << "第" << setiosflags(ios::right) << setw(3) << i + 1 << //setw(3):保证输出宽度为3
            "个人的红包是:" << setiosflags(ios::right) << setw(6) <<
            setiosflags(ios::fixed) << setprecision(2) <<
            round(b[i] * 100) / 100.0;    //说明：https://www.cnblogs.com/mofushaohua/p/7789432.html
        if (best == i) {
            cout << "(手气最佳)" << endl;
        }
        else {

            cout << endl;
        }
    }
    //最后一人的红包金额等于总金额减去前面的金额。
    cout << "第" << setiosflags(ios::right) <<
        setw(3) << number << "个人的红包是:" <<
        setiosflags(ios::right) << setw(6) << setiosflags(ios::fixed) <<
        setprecision(2) << round((total - sumb) * 100) / 100.0;
    if (best == number - 1) {
        cout << "(手气最佳)" << endl;
    }
    else {

        cout << endl;
    }
    return 0;
}