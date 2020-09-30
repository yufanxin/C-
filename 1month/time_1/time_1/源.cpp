#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    struct tm tmnow;
    char dt[100];

    // 基于当前系统的当前日期/时间
    time_t now = time(0);

    // 把 now 转换为字符串形式
    ctime_s(dt, 100, &now);

    cout << "本地日期和时间：" << dt << endl;

    // 把 now 转换为 tm 结构
    gmtime_s(&tmnow, &now);
    asctime_s(dt, &tmnow);
    cout << "UTC 日期和时间：" << dt << endl;
}