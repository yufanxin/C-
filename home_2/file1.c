//指针充当变量与数组 
#include <stdio.h>
int main(void){
    int *num = NULL;
    int *x, y[] = {12, 22,32}, z = 100;
    //下面演示，指针既可充当变量、也可充当数组
    x=&z;      //整型变量的地址赋给x
    printf("*x=%d, x[0]=%d\n", *x, x[0]);
    x = y;     //数组的地址赋给x
    printf("*x=%d, x[ 0]=%d, x[ 1]=%d, x[2]=%d\n", *x, x[0], x[1], x[2]);
    x = y + 1; //数组的第二位地址赋给x
    printf("*x=%d, x[-1]=%d, x[ 0]=%d, x[1]=%d\n", *x, x[-1], x[0], x[1]);
    x = y + 2; //数组的第三位地址赋给x
    printf("*x=%d, x[-2]=%d, x[-1]=%d, x[0]=%d\n", *x, x[-2], x[-1], x[0]);
    return 0;
}
