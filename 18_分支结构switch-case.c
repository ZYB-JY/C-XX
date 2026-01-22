/*#include <stdio.h>

//1.格式：
//switch(表达式){
//case 常量值1:
//	语句块1;
	//break;
//case 常量值2:
//	语句块2;
	//break;
//case 常量值n:
//	语句块n;
	//break;
//default:
	//语句块n + 1;
//}

//2.执行过程：
//第1步：根据switch中表达式的值，依次匹配各个case。如果表达式的值等于某个case中的常量值，则执行对应case中的执行语句。
//第2步：执行完此case的执行语句以后， 
//			情况1：如果遇到break，则执行break并跳出当前的switch - case结构  
//			情况2：如果没有遇到break，则会继续执行当前case之后的其它case中的执行语句。--> case穿透 
//			...  直到遇到break关键字或执行完所有的case及default的执行语句，跳出当前的switch - case结构
//

//3.说明：
//-->switch中的表达式可以是整型或字符类型，不可以使用浮点类型。
//-->case 后的常量 与表达式进行等值的判断。
//-->关注case 中break的使用。从经验上讲，使用switch-case的情况下，多数都是带break。
//-->default：是可选的，位置也是灵活的。

int main()
{

	//结论：凡是使用switch-case的结构都可以转换为if-else结构。反之，不成立。
	//开发经验：如果既可以使用switch - case，又可以使用if - else，建议使用switch - case。因为效率稍高。

	int num = 2;
	switch (num)
	{
	case 0:
		printf("zero\n");
		break;
	case 1:
		printf("one\n");
		break;
	case 2:
		printf("tow\n");
		break;				//不加break，会继续向下执行，case 穿透。
	case 3:
		printf("three\n");
		break;
	default:
		printf("other\n");
	}

	int score = 83;
	//方式1：
	switch (score / 10) {
	case 0:
		printf("不及格\n");
		break;
	case 1:
		printf("不及格\n");
		break;
	case 2:
		printf("不及格\n");
		break;
	case 3:
		printf("不及格\n");
		break;
	case 4:
		printf("不及格\n");
		break;
	case 5:
		printf("不及格\n");
		break;
	case 6:
		printf("及格\n");
		break;
	case 7:
		printf("及格\n");
		break;
	case 8:
		printf("及格\n");
		break;
	case 9:
		printf("及格\n");
		break;
	case 10:
		printf("及格\n");
		break;
	default:
		printf("成绩输入有误\n");
		break;
	}

	int score1 = 48;
	//方式2：体会case穿透
	switch (score1 / 10) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("不及格\n");
		break;
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
		printf("及格\n");
		break;
	default:
		printf("成绩输入有误\n");
		break;
	}

	int score2 = 63;
	//方式3：算法层面优化
	switch (score2 / 60) {
	case 0:
		printf("不及格\n");
		break;
	case 1:
		printf("及格\n");
		break;
	default:
		printf("成绩输入有误\n");
		break;
	}



	return 0;
}*/