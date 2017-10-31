//对输入的十个数从小到大进行排序(边比较边交换)
#include <stdio.h>

int main()
{
	int a[10];
	int i=0;
	int j=0;
	int temp;
	printf("请分别输入十个数\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	 } 
	for(i=0;i<9;i++)
	 for(j=i+1;j<10;j++)
	 {
	 	if(a[j]<a[i])
	 	{
	 		temp=a[i];
	 		a[i]=a[j];
	 		a[j]=temp;
		 }
	 }
	 for(i=0;i<10;i++)
	 printf("%d\n",a[i]);
	
 } 
