/*#include <stdio.h>

int main()
{
	//规则一：隐式类型转换（或自动类型转换）
	//情况1：窄类型自动转为宽类型
	short s = 10;
	int s1 = s;//自动类型的转换
	long s2 = s;//自动类型的转换

	double s3 = s2;//自动类型的转换
	float s4 = 135.1f;
	double s5 = s4;//自动类型的转换

	char i1 = 'A';//65
	int i2 = i1 + s1;//自动类型的转换
	printf("i2 = %d\n", i2);

	//如果是char类型，short类型之间做运算，运算结果是int类型
	//short i3 = i1 + s;//会导致编译器警告
	int i3 = i1 + s;
	printf("i3 = %d\n", i3);

	//情况2：宽类型赋值给窄类型
	float f1 = 12.3;//将double类型12.3转换为float类型，会警告
	double d1 = 12.3;
	int i4 = d1;//将double类型的值转换为int类型，会警告

	//为了避免上述的警告，我们需要使用强制类型转换
	//规则二：强制类型转换：显式的将宽类型转换为窄类型。需要使用强转符：()

	double dd1 = 12.9;
	int ii1 = (int)dd1;//没有警告
	printf("ii1 = %d\n", ii1);//数据截断 12

	//注意：：强制类型转换会导致精度损失。

	int i = 40000;
	short s8 = (short)i;
	printf("s8 = %d\n", s8); //-25536 溢出

	return 0;
}*/