/*//测试算术运算符的使用
//+、-、+、-、*、/、%、++（前，后）、--（前后）

#include <stdio.h>


int main()
{
	int a = 10;
	int b = 3;
	// 加法
	int sum = a + b;
	printf("加法: %d + %d = %d\n", a, b, sum);
	// 减法
	int difference = a - b;
	printf("减法: %d - %d = %d\n", a, b, difference);
	// 乘法
	int product = a * b;
	printf("乘法: %d * %d = %d\n", a, b, product);
	// 除法
	int quotient = a / b;
	printf("除法: %d / %d = %d\n", a, b, quotient);
	// 取模
	int remainder = a % b;
	printf("取模: %d %% %d = %d\n", a, b, remainder);
	
	//开发中，常常用来判断一个数是否可以被另一个是整除。比如：判断一个数是否是偶数 num % 2 == 0
	//注意：运算结果的符号与被模数相同

	//前++
	//后++
	//1.++单独运算时，如下，前++和后++没有区别，都表示自增1.
	//2.涉及到其他运算时
			//前++：先自增1，然后做其它运算
			//后++：先做其它运算，后自增1

	int n1 = 10;
	//n1++; //后++
	++n1;	//前++
	printf("%d\n", n1);

	//有区别的场景
	int n2 = 10;
	int n3 = n2++;//先赋值，后自增
	printf("n2 = %d, n3 = %d\n", n2, n3);

	int n4 = 10;
	int n5 = ++n4;//先自增，后赋值
	printf("n4 = %d, n5 = %d\n", n4, n5);

	//前--
	//后--
	//1.--单独运算时，如下，前--和后--没有区别，都表示自增1.
	//2.涉及到其他运算时
			//前--：先自减1，然后做其它运算
			//后--：先做其它运算，后自减1

	//练习：随意给出一个整数，打印显示它的个位数，十位数，百位数的值。
	//格式如下：
		//数字xxx的情况如下：
		//个位数：
		//十位数：
		//百位数：
		//例如：
		//数字153的情况如下：
		//个位数：3
		//十位数：5
		//百位数：1
	int n = 153;
	int ge = n % 10;
	int shi = n / 10 % 10;
	int bai = n / 100;
	printf("ge = %d\nshi = %d\nbai = %d\n", ge, shi, bai);

	//练习：为抵抗洪水，战士连续作战89小时，编程计算共多少天零多少小时？
	int time = 89;
	int days = time / 24;
	int hours = time % 24;
	printf("%d天零%d小时\n", days, hours);

	return 0;
}*/