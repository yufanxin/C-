//malloc函数的使用
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char *p;
	p=(char *)(malloc(60*sizeof(char)));//申请内存空间 
	if(p==NULL)
	{
		printf("动态内存分配失败");
		exit(1);
	}
	strcpy(p,"https://github.com/yufanxin/\n"); //
	printf("%s",p);
	free(p);//释放内存 
	p=NULL;//指针置空，防止野指针 
	
 } 
