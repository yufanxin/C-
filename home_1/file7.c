//从键盘输入行数打印杨辉三角 
#include <stdio.h>

int main(void)
 {
    int a[100][100];
    int i,j,n;
    printf("输入你想打印的行数");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a[i][0]=1;
        a[i][i]=1;
     }
     for (i=2;i<n;i++)
     {
           for (j=1;j<n-1;j++)
                  a[i][j]=a[i-1][j-1]+a[i-1][j]; //从第三行起始的通项  
     }
     for(i=0;i<n;i++) 
     {
          for(j=0;j<=i;j++)
        	printf("%5d",a[i][j]);//打印完一整行后才能换行，若用"\n"会打印一个空一行 
        printf("\n");
     }
 }
