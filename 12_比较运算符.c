/*//测试比较运算符的使用
// 
//	>  >=  <  <=  ==  !=
// 
//1.比较的结果是布尔类型。默认使用1表示真，0表示假。
//2.注意区分 == 和 =


#include <stdio.h>



int main()
{
	int m1 = 10;
	int n1 = 20;
	printf("m1 > n1 :%d\n", m1 > n1);
	printf("m1 < n1 :%d\n", m1 < n1);

	int m2 = 0;
	if (m2 == 0)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}

	//注意：在C语言中，不要连续使用比较操作，容易出错！
	int m3 = 10;
	//错误举例
	if (0 < m3 < 5)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	//正确的写法
	if (0 < m3 && m3 < 5)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}


	return 0;
}*/