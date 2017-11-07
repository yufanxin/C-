//输入两个数，用指针的方法先大后小输出

#include <stdio.h>

int main(void)
{
	int *p=NULL;
	int *q=NULL;
	int *tab=NULL;
	int number1=0;
	int number2=0;
	printf("Please enter two numbers");
	scanf("%d %d",&number1,&number2);
	p=&number1;
	q=&number2; 
	if(number1<number2) //交换两数字指针地址
	{
		tab=p;
		p=q;
		q=tab;
	}
	printf("Max=%d,Min=%d\n",*p,*q);
 } 
