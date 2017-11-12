//多维数组的初始化 
#include <stdio.h>  
  
int main(void)  
{  
    unsigned char char_value[3][6][4][5] = {  
        {  
        },  
        {  
            {  
  
            },  
            {  
                {},{0,' '}  
            },  
            {  
                {},{},{0,0,0,'A'},{0,0,0,0,'x'}  
            },  
            {  
                {},{},{0,0,0xf3}  
            },  
            {  
                {},{},{0,0,0,'\n'}  
            },  
            {  
  
            },  
        },  
        {  
            {  
  
            },  
            {  
                {},{0,0,0320}  
            },  
            {  
                {},{0,'0'},{0,0,'\''},{0,'\121'}  
            },  
            {  
  
            },  
            {  
                {},{},{},{0,0,'3',3}  
            },  
            {  
                {},{},{},{0,0,0,0,125}  
            },  
        }  
                            };  
  
    printf("1223=%x\n", char_value[1][2][2][3]);  
    printf("1111=%x\n", char_value[1][1][1][1]);  
    printf("1322=%x\n", char_value[1][3][2][2]);  
    printf("2432=%x\n", char_value[2][4][3][2]);  
    printf("1423=%x\n", char_value[1][4][2][3]);  
    printf("2231=%x\n", char_value[2][2][3][1]);  
    printf("2433=%x\n", char_value[2][4][3][3]);  
    printf("2534=%x\n", char_value[2][5][3][4]);  
    printf("1234=%x\n", char_value[1][2][3][4]);  
    printf("2112=%x\n", char_value[2][1][1][2]);  
    printf("2222=%x\n", char_value[2][2][2][2]);  
    printf("2211=%x\n", char_value[2][2][1][1]);  
  
    return 0;  
}  
