//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//
//int main()
//{
//	//编译器代码是从前往后运行，如果函数定义在main函数之后
//	//那么main函数中若调用了该函数就会报错，显示未定义
//	//若想调用成功，可以声明一下，函数声明
//	//先声明后使用
//	//int 函数名(int, int),声明返回值，函数名，参数类型
//
//
//	//协同开发时各自完成不同的函数功能
//	//创建add.c  add.h  test.c文件
//	//在add,h文件中声明函数
//	//在add.c文件中写函数功能
//	//在test.c文件中引用头文件add.h文件就可以使用add函数功能
//	//拼文件 
//
//	//鹏哥  47函数嵌套链式  使文件变为静态库  卖 只有使用权
//	return 0;
//}