/*//测试赋值运算符的使用
//= :	1.当“=”两侧数据类型不一致时，可以使用自动类型转换或使用强制类型转换原则进行处理。
//		2.支持连续赋值。 
//拓展：+=, -=, *=, /=, %=


#include <stdio.h>



int main()
{
	int i1 = 10;
	double di = i1;			//自动类型提升
	short s1 = (short)i1;	//强制类型转换

	int a, b;
	a = b = 10;				//连续赋值

	//定义变量的简化方式
	int m1 = 1;
	int n1 = 2;

	//可以改写为
	int m2 = 3,n2 = 4;

	//测试:+=, -=, *=, /=, %=
	int x1 = 5;
	x1 += 5;
	printf("x1 = %d\n", x1);

	int x2 = 13;
	x2 /= 5;
	printf("x2 = %d\n", x2);

	//现有变量m，m，请编写代码，交换m和n的值
	int m = 10;
	int n = 20;
	printf("m = %d, n = %d\n", m, n);

	//交换两个变量的值
	int temp = m;
	m = n;
	n = temp;
	printf("m = %d, n = %d\n", m, n);


	return 0;
}*/