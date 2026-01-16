#include <stdio.h>
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
int main()
{
	int a = 10;	//省略了signed
	signed int a1 = 20;



	printf("");
	return 0;
}