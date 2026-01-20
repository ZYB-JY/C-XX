/*//测试sizeof运算符
// 
// 1.sizeof 运算符：sizeof(参数)
//		- 参数可以是数据类型的关键字，也可以是变量名或某个具体的值。
//		- 返回某种数据类型或某个值占用的字节数量。
// 2.sizeof 运算符的返回值类型，由具体的操作系统决定的。
//		C 语言提供了一个解决方法，创造了一个类型别名 size_t ，用来统一表示 sizeof 的返回值类型。
// 3.printf() 有专门的占位符 % zd 或% zu ，用来处理 size_t 类型的值。
//
#include <stdio.h>



int main()
{
	//情况1：
	int cap1 = sizeof(int);		//返回int类型占用的字节数大小
	printf("cap1 = %d\n", cap1); //4

	int cap2 = sizeof(double);		//返回double类型占用的字节数大小
	printf("cap2 = %d\n", cap2); //8

	//情况2：
	float f1 = 12.3f;
	int cap3 = sizeof(f1);//返回变量f1占用的字节数大小
	printf("cap3 = %d\n", cap3); //4

	//情况3：
	int cap4 = sizeof(123);
	printf("cap4 = %d\n", cap4);//4

	//测试sizeof返回值类型
	size_t cap = sizeof(int);
	printf("cap = %zd\n", sizeof(int));

	return 0;
}
//开发建议：
//1.不要过多的依赖运算的优先级来控制表达式的执行顺序，这样可读性太差，尽量使用()来控制表达式的执行顺序。
//2.不要把一个表达式写得过于复杂，如果一个表达式过于复杂，则把它分成几步来完成。
//	例如：(num1 + num2) * 2 >num3 && num2 > num3 ? num3 : num1 + num2;
*/