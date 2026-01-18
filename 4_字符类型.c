//#include <stdio.h>

/*
* 在C语言中char表示一个字符，使用''括起来
* 
*一个char占用一个字节
* 
* char类型中的每一个字符对应着一个ASCII码，因为ASCII码是一个值，所以char类型变量可以参与+ - * /
* 
* 根据C90标准，C语言允许在关键字char前面使用signed或unsigned
*/
/*
int main()
{
	//方式1：使用一对''，括起来一个单独的字符
	char c1 = 'A';

	printf("char c1 = %c\n", c1);  //A
	printf("char c1 = %d\n", c1);  //65

	//方法2：使用具体字符对应的ASCII码
	char c2 = 66;

	printf("char c2 = %c\n", c2);

	//区分'1' 和 1
	char c3 = '1';
	char c4 = 1;

	printf("char c3 = %d\n", c3);
	printf("char c4 = %d\n", c4);

	printf("c1+1 =%c", c1 + 1);

	//方法3：使用转义字符
	char c5 = '\n';//换行符
	char c5 = '\t';//制表符

	char c7 = '\'';//表示的字符为 '

	return 0;
}*/