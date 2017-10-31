//利用函数传递数组，可以传递多个数值并返回到原函数
//从键盘中输入十个整数，找出最大值并输出 
#include <stdio.h>
int MAX(int a[10]);
int main()
{
	int i=0;//计数 
	int a[10];
	int temp=0;
	printf("请输入十个数值:\n"); 
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	temp=MAX(a);
	printf("Max value is %d\n",temp);
 } 
 
 int MAX(int a[10])
 {
 	int j=0;
 	int max=a[0];
 	for(j=0;j<10;j++)
 	{
 		if(a[j]>max)
 		max=a[j];
	 }
	 return max;
 }
