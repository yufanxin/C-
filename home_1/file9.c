//从键盘输入5个数字，并采用指针的方法输出 
#include <stdio.h>
int main()
{
     int*p,i,j,tab,a[5];
     p=a;
     printf("please input 5 numbers:\n");
     for (i=0;i<5;i++)
            scanf("%d",p++);
     printf("the input array is:\n");
     for(p=a,i=0;i<5;i++)
           printf("%2d",*p++);
     return 0;
}
