#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	//除号   /
	//整数除法
	//int a = 3 / 5;//   0
	
		//浮点数除法
		//float a = 6.0f / 5.0f;//   



	//取模操作符   %
	//两端必为整数
	//int a = 7 % 3;//  1




	//移位操作符  <<   >>
	//在二进制的基础上左移移位
	//二进制32位，2的二进制为：
	//00000000000000000000000000000010
	//向左移一位：00...100 = 4  左移补0
	//两种右移  算数右移补符号位  逻辑右移补0
	// 只有负数才有原 反 补码
	//int a = 2;
	//int b = a << 1;



	//位操作符  &按位与  |按位与  ^按位异或
	//int a = 3 & 5; // 1
	//int a = 3 | 5; // 7
	//int a = 3 ^ 5; // 6
	//在二进制32位基础上，一一对应有零就取零，无零取1
	//00000000000000000000000000000011  3
	//00000000000000000000000000000101  5
	//00000000000000000000000000000001 结果
	//按位或 有1取1，无1取0
	//按位异或  相同为0  相异为1
	// 
	//假设a, b两个数，异或后为c, 
	// 这时a与c异或一下c就变成b, b与c异或一下c就变成a，
	//可用于不用第三放交换两个变量的值

	//小练习：求一个数的二进制有几个1
	//提示：循环按位与1的二进制，有1加1



	//逻辑操作符，只认真假
	//    &&    逻辑与，两边同时为真才为真
	//    ||    逻辑或， 有真则为真



	//单目操作符 - 一个操作数
	//    ！   逻辑反操作
	//    -    负值
	//    +    正值
	//    &    取地址
	//  sizeof 计算统计操作符类型的长度，计算变量名的时候可以省略（）
				//证明sizeof是个操作符
				// sizeof()括号中的表达式不参与运算，不计算
	//    ~    对一个数的二进制位取反
	//    ++   
	//    --   
	//    *    解引用操作符
	//    ()   强制转换类型操作符



	//关系操作符
	//    ==    判断相等  字符串不能用
	//    !=    判断不相等
	//    <=
	//    >=
	//    >
	//    <



	//三目操作符  唯一
	//  a ? b : c 


	
	//逗号表达式
	// （a=2,a+=2,b=4,a+=4） //从左向右计算，只返回最后一个表达式的结果



	//下标引用操作符
	//    []    arr[5]



	//函数调用操作符
	//    ()    add()
	


	//结构成员访问操作符   struck book 定义结构
	// struck book b {char name[10];}
	// struck book * pb = &b
    //    .     b.name
	//    ->    pb->name  结构体指针->成员名
 








	//printf("%d", b); 
	return 0;
}