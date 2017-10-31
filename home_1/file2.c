// 利用数组调用求平均值
 #include <stdio.h>
 float aver(float x,float y,float z);
 int main()
 {
 	float temp;
 	int i=0;
 	float a[3];
 	for(i=0;i<3;i++)
 	{
 		scanf("%f",&a[i]);
	 }
	 temp=aver(a[0],a[1],a[2]);
	 printf("averange is %f\n",temp);
 }
 
 float aver(float a,float b,float c)
 {
 	float re_value=0;
 	re_value=(a+b+c)/3;
 	return re_value;
 }
