#include<iostream>
using namespace std;



int main()
{
	int a = 9;
	int b = 10;
	const int* p = &a;//p是一个指向int类型的const值,与int const *p等价
	cout << *p << endl; //编译错误，指向的对象是只读的，不可通过p进行改变
	p = &b;     //合法，改变了p的指向
}