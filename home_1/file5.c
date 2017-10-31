//对输入的十个数从小到大进行排序(边比较边记录法)
#include <stdio.h>
int main()
{
	int temp=0;
	int i=0;
	int j=0;
	int a[10];
	int k=0; 
	printf("请分别输入十个数字:\n");
	for(i<0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<9;i++)
	{
		
	 for(k=i+1;k<10;k++)
	 {
	 	if(a[k]<a[i])
	 	j=k;
	 }
		if(k!=i)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
 } 
