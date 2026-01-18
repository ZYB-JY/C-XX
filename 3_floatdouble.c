//#include <stdio.h>

/*
1、常用的类型：float（4字节）\ double（8字节）\ long double（12字节）

2、float类型数据范围大于long类型

3、浮点型变量不能使用signed或unsigned修饰符。

4、最常用的浮点类型为：double类型，因为精度比float高

5、浮点型常量，默认为 double类型

6、关于后缀：
		如果定义float类型的，则需要以“F”或者“f”作为后缀
		如果定义long double类型的，则需要以“l”或者“L”作为后缀
*/
/*
int main()
{
	double a = 4.2;

	double b = a + 2.3;//2.3是double类型的

	float f1 = 5.2F;
	float f2 = 5.2f;

	long double d1 = 3.14L;
*/
/* 练习：有人用温度计测量出用华氏法表示的温度(如64°F），今要求把它转
换为以摄氏法表示的温度(如17.8℃)。转换的公式为：c = 5(f-32)/9。
其中，f 代表华氏温度，c 代表摄氏温度。
*/
/*
	double f, c;
	f = 64.0;
	c = 5.0 * (f - 32) / 9;
	printf("c=%.2f\nf=%.2f", c, f);

	return 0;
}*/