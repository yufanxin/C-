#include <iostream>

using namespace std;

// ȫ�ֱ�������
int g = 20;
int fun1(int a, int b) {
    g = a + b;
    cout << "���ı��ȫ�ֱ���Ϊ��" << g << endl;
    return 0;
}

int fun2() {
    cout << "��ʱ��ȫ�ֱ���Ϊ��" << g << endl;
    return 0;
}

int main() {
    fun2();
    fun1(10, 20);
    fun2();
    return 0;
}