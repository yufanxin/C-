#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int i, number;
    int best;//�������
    float total;

    cout << "����������";
    cin >> total;
    cout << "�����������������";
    cin >> number;
    /* ��������� */
    // ��������
    srand((unsigned)time(NULL));
    float a[1024];//����ÿ���˵�����������֧��1024�����������
    float b[1024];//����ÿ���˻�õĺ����
    float suma = 0;//������ܺ͡�
    float sumb = 0;//����ܺ͡�
    int max = 0;
    for (i = 0; i < number; i++)
    {
        // ����ʵ�ʵ������
        a[i] = rand() % 100;

        if (a[i] > max) {
            max = a[i];
            best = i;//��ȡ�������
        }
        suma += a[i];
    }

    for (i = 0; i < number - 1; i++)
    {
        b[i] = a[i] / suma * total;//�������������ÿ����ʵ�ʻ�õĽ��
        sumb += round(b[i] * 100) / 100.0;//�����������λС��
        //�����Ϣ
        cout << "��" << setiosflags(ios::right) << setw(3) << i + 1 << //setw(3):��֤������Ϊ3
            "���˵ĺ����:" << setiosflags(ios::right) << setw(6) <<
            setiosflags(ios::fixed) << setprecision(2) <<
            round(b[i] * 100) / 100.0;    //˵����https://www.cnblogs.com/mofushaohua/p/7789432.html
        if (best == i) {
            cout << "(�������)" << endl;
        }
        else {

            cout << endl;
        }
    }
    //���һ�˵ĺ���������ܽ���ȥǰ��Ľ�
    cout << "��" << setiosflags(ios::right) <<
        setw(3) << number << "���˵ĺ����:" <<
        setiosflags(ios::right) << setw(6) << setiosflags(ios::fixed) <<
        setprecision(2) << round((total - sumb) * 100) / 100.0;
    if (best == number - 1) {
        cout << "(�������)" << endl;
    }
    else {

        cout << endl;
    }
    return 0;
}