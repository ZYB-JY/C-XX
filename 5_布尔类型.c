/*//布尔类型的使用
#include <stdio.h>
#include<stdbool.h>
//使用宏定义
#define TRUE 1
#define FALSE 0
#define BOOL int

int main()
{   //第一种处理方式
	//c89没有布尔类型，可以用整型代替,0表示假，非0表示真
    int handsome = 1;

    if (handsome)
    {
        printf("我好帅!\n");
    }
	//第二种处理方式
	BOOL handsome1 = TRUE;

    if (handsome1)
    {
        printf("好帅!\n");
    }
	//第三种处理方式
    //C99 标准添加了类型 _Bool，表示布尔值，即逻辑值true和false。
	_Bool isBeauty1 = 1;
	
    if (isBeauty1)
    {
        printf("你是一个美女!\n");
    }
    else
    {
		printf("你不是一个美女!\n");
    }
	//第四种处理方式
    //C99 标准还定义了头文件<stdbool.h>，其中定义了宏bool、true和false，分别对应_Bool类型、1和0。
    bool isBeauty2 = false;
    if (isBeauty2)
    {
        printf("你是一个美女!\n");
    }
    else
    {
        printf("你不是一个美女!\n");
	}
}*/