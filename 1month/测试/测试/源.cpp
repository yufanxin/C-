#include<iostream>
using namespace std;



int main()
{
	int a = 9;
	int b = 10;
	const int* p = &a;//p��һ��ָ��int���͵�constֵ,��int const *p�ȼ�
	cout << *p << endl; //�������ָ��Ķ�����ֻ���ģ�����ͨ��p���иı�
	p = &b;     //�Ϸ����ı���p��ָ��
}