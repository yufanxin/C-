
//有一个3*3的矩阵，求其最大值 ，并输出对应的行和列
#include <stdio.h>
int main()
{
	int i=0;
	int j=0;
	int row=0;//行 
	int clo=0;//列
	int max=0;
	int a[3][3]={{1,2,4},{5,3,9},{1,11,2}};
	max=a[0][0];
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		if(a[i][j]>=max)
		{
		max=a[i][j];
		row=i;
		clo=j;
	}
	}
}
	printf("Max value is %d,row is %d,col is %d\n",max,row,clo);
	printf("%d\n",a[row][clo]);
	 } 
