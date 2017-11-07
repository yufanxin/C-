 //数组和指针结合的方式输出数组元素 
#include <stdio.h>
int main()
{
	int i=0;
	int *p=NULL;
	int a[8]={12,2,13,24,1,24,3,23};
	p=a;
	for(i=0;i<8;i++)
	{
		printf("a[i]=%d\n",p[i]);
	}
	printf("\n");
	for(i=0;i<8;i++)
	{
		printf("*(p+%d):%d\n",i,*(p+i));
	}
}
