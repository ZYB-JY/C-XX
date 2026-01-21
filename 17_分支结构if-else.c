/*#include <stdio.h>


int main()
{
	//岳小鹏参加C语言考试，他和父亲岳不群达成承诺：
	//如果：
	//		成绩为100分时，奖励一辆跑车；
	//		成绩为(80，99]时，奖励一辆山地自行车；
	//		当成绩为[60, 80]时，奖励环球影城一日游；
	//		其它时，胖揍一顿。
	//		说明：默认成绩是在[0, 100]范围内
	int score = 0;
	if (score == 100)
	{
		printf("奖励一辆跑车！\n");
	}
	else if (score > 80 && score <= 99)
	{
		printf("奖励一辆山地自行车\n");
	}
	else if (score >= 60 && score <= 80)
	{
		printf("奖励环球影城一日游!\n");
	}
	else
	{
		printf("准备胖揍一顿！\n");
	}
	
	//练习一：
	//编写一个程序，判定某个年份是否为闰年。年份满足如下条件之一，即是闰年：
		//(1) year 是 400 的整倍数： year % 400 == 0
		//(2) 能被4整除，但不能被100整除：year % 4 == 0 && year % 100 != 0
	int year;
	printf("enter year:\n");
	scanf_s("%d", &year);
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
	{
		printf("%d is a leap year.\n", year);
	}
	else
	{
		printf("%d no is a leap year.\n", year);
	}

	//练习二：熟悉if-else嵌套的使用
	// 出票系统：根据淡旺季的月份和年龄，打印票价。要求，月份和年龄从键盘获取输入。
	//4_10 旺季：
	//		成人（18-60）：60 
	//		儿童（< 18） : 半价 
	//		老人（> 60） :1 / 3 
	// 淡季：
	//		成人 : 40 
	//		其他 : 20
	int month, age;
	printf("enter month:\n");
	scanf_s("%d", &month);

	printf("enter age:\n");
	scanf_s("%d", &age);

	double price = 60.0;

	if (month >= 4 && month <= 8)
	{
		if (age < 18)
		{
			price /= 2;
		}
		else if( age > 60)
		{
			price /= 3;
		}
	}
	else
	{
		price -= 20;
		if (age < 18 || age > 60)
		{
			price /= 2;
		}
	}

	printf("票价为:%.2f", price);


	return 0;
}*/