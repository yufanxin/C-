#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    struct tm tmnow;
    char dt[100];

    // ���ڵ�ǰϵͳ�ĵ�ǰ����/ʱ��
    time_t now = time(0);

    // �� now ת��Ϊ�ַ�����ʽ
    ctime_s(dt, 100, &now);

    cout << "�������ں�ʱ�䣺" << dt << endl;

    // �� now ת��Ϊ tm �ṹ
    gmtime_s(&tmnow, &now);
    asctime_s(dt, &tmnow);
    cout << "UTC ���ں�ʱ�䣺" << dt << endl;
}