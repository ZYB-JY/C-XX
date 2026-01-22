/*//测试逻辑运算符的使用
//
// && 逻辑与， || 逻辑或， ! 逻辑非
//



#include <stdio.h>



int main()
{
	// && 短路的现象

	//a && b
	// -当 a 为假(或0)时，因为a && b 结果必定为 0，所以不再执行表达式 b
	// -当 a 为真(非0)时，因为a&& b 结果不确定，所以会继续求解表达式b

	int a1 = 10;
	int b1 = 10;
	if (a1 > 5 && b1++ > 0)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	printf("b1 = %d\n", b1);//11

	int a2 = 10;
	int b2 = 10;
	if (a2 > 20 && b2++ > 0)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	printf("b2 = %d\n", b2);//10

	int i = 1;
	int j = 10;
	if (i || j++ > 0) {
		printf("床前明月光\n");
	}
	else {
		printf("疑似地上霜\n");
	}
	printf("%d\n", j); //10

	//综合
	int x = 1;
	int y = 0;
	short z = 42;
	if ((z++ == 42) && (y = 1))
	{
		z++; // z = 44
	}
	if ((x = 0) || (++z == 45)) 
	{
		z++; // z = 46
	}
	printf("z=%d", z);

	return 0;
}*/