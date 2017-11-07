//以输入的值为最大值，从1到n依次输入，到10的倍数处换行 
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int main(void)
{
	int i=0;
	int *p=NULL;
	int n=0;
	printf("请输入数组长度");
	scanf("%d",&n);
	p=(int *)(malloc(n*sizeof(int)));
	for(i=0;i<n;i++)
	{
		p[i]=i+1;//p的值作为数组的地址
		if((i+1)%10==0)
		printf("\n");
		printf("%5d",p[i]);
		
	}
	free(p);
	p=NULL;
	printf("\n");
}
