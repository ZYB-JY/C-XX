/*
//输入函数：scanf() 、 getchar()、gets()：
//scanf()，是格式输入函数，可接收任意类型的数据。
//getchar()，是字符输入函数， 只能接收单个字符。
//gets()，是字符串输入函数。
//输出函数：printf() 、 putchar()、puts()：
//printf()，是格式输出函数，可按指定的格式显示任意类型的数据。
//putchar()，字符显示函数，只能显示单个字符。
//puts()，是字符串输出函数。
#include <stdio.h>
#define PI 3.14

//1.何为输入输出
//输出：从计算机向外部输出设备(显示器、打印机)输出数据。
//输入：从输入设备(键盘、鼠标、扫描仪)向计算机输入数据。


int main()
{
	//2.scanf（）的使用
	//格式：scanf("格式控制字符串", 参数地址列表);

	//练习：计算圆的面积，半径由用户指定。
	float r;
	printf("请输入圆的半径：");
	//在C语言中，scanf函数被认为是不安全的，尤其是在处理格式化输入时。
	// 为了提高安全性，微软引入了更安全的版本，即scanf_s。
	// scanf_s需要额外的参数来指定缓冲区的大小，以防止缓冲区溢出。
	scanf_s("%f", &r);		//理解为阻塞式函数		
	double area = PI * r * r;
	printf("圆的面积为：%.2f\n", area);

	////练习：：输入多个变量的值，求乘积
	int a, b, c;//用于接受从键盘输入的三个值
	printf("请输入三个数：\n");
	scanf_s("%d%d%d", &a, &b, &c);
	//scanf_s("%d,%d,%d", &a, &b, &c); //输入数据时，使用逗号隔开。
	int product = a * b * c;
	printf("乘积为：%d\n", product);

	//3.getchar()与putchar()的使用
	//	>putchar()：输出一个字符数据
	//	>getchar()：输入一个字符数据
	char c1 = 'A';
	putchar(c1);
	char c2 = getchar();//是一个阻塞式的函数
	putchar(c2);
	

	//4.gets()与puts()的使用
	//	>puts()：输出一个字符串
	//	>gets()：输入一个字符串
	//输出字符串
	char str[] = {"china"};
	puts(str);
	char str1[] = {"Beijing"};
	puts(str1);
	//读入字符串 
	char str2[15];
	printf("请输入字符串：\n");
	gets(str2);//从键盘读入字符串，并将字符串数据存储到str2数组中 
	puts(str2);
	return 0;
}
*/