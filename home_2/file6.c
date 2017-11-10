//输入a和b两个整数，按先大后小的顺序来输出a和b(by pointer)
#include <stdio.h>
int main()
{
	int *a,*b,*p,m,n;
	printf("please enter two numebers:\n");
	scanf("%d %d",&m,&n);
	a=&m;
	b=&n;
	if(m<n)
	{
		p=a;
		a=b;
		b=p;
	}
	printf("a=%d,b=%d\n",m,n);
	printf("Max=%d,Min=%d\n",*a,*b);
	return 0;
}
