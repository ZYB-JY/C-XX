/*#include <stdio.h>
#include <stdint.h>*/
/* 
1.整型数据类型	64位编译器为例
	>int		4字节
	>short		2字节
	>long		8字节
	>long long	8字节	(C99新增的)
2.整型可以被signed，unsigned修饰。
	>signed		带符号整数
	>unsigned	无符号整数
*/	
/*
int main()
{
	int a = 10;	//省略了signed
	signed int b = -20;
	unsigned int c = 30;

	long d = 251451554;		//隐式转换
	long f = 425415451L;	//后缀L表示long型常量

	int32_t g = 456;
	

	printf("%d\n%d\n%d\n%d\n%ld\n%d\n", a, b, c, d, f, g);
	return 0;
}
*/