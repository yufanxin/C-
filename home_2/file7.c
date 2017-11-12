//数组指针定义的讲解
#include <stdio.h>  
  
/*int main(void)  
{  
    char *parray = "hello";  //把字符串常量赋给可以改变他的变量会发出警告，而实际运行会出错 
    *parray = 'a';  //不能改变常量，出错 
    printf("parray = %s\n", parray);  
  
    return 0;  
}   */
int main(void)
{
	char const *parray="hello";
	*parray='a'; //const无法通过编译，可以节省调试时间 
	printf("parray=%s\n",parray);
}
