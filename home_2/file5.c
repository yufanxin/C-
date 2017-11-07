//将数组中的元素倒序输出
#include <stdio.h>
void sort(int * anotherp,int number); //排序函数 
int main(void)
{
	int i=0;
	int *p=NULL;
	int a[10]={12,134,21,245,12,3,4,2,31,87};
	p=a;
	printf("original array:\n ");
	for(i=0;i<10;i++)
	{
		printf("a[%d]=:%d\n",i,*(p+i));
	}
	sort(p,10);//调用 
	printf("inverted array:\n");
	for(i=0;i<10;i++)
	{
		printf("a[%d]=:%d\n",i,*(p+i));
	}
 } 
void sort(int * anotherp,int number)
 {
 	int i=0; 
 	int j=0;
 	int tap;
 	for(i=0,j=number-1;i<j;i++,j--) //i<j:一半就可以完成交换，若改为i<number,会还原到起始状态 
 	{
 		tap=anotherp[i];
 		anotherp[i]=anotherp[j];
 		anotherp[j]=tap;
	 }
 }
