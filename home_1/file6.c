//使用冒泡排序法将数字从小到大排列
#include <stdio.h>

int main()
{
	int temp=0;
	int i=0;
	int j=0;
	int a[10];
	printf("请输入10位数字，系统将为你排序\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		if(a[j+1]<=a[j]) //与前一个元素比较，如果小则交换
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
 } 
