#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"


void menu()
{
	printf("********************\n");
	printf("*******1-play-******\n");
	printf("*******0-exit-******\n");
	printf("********************\n");
}

void game()
{
	//存储数据 - 二维数组
	char board[ROW][COL];
	
	//初始化棋盘 - 初始化空格
	IntBoard(board, ROW, COL);

	//输出棋盘 - 实质是打印数组的内容
	DisplayBoard(board, ROW, COL);

	char ret;
	while (1)
	{
		//玩家走棋
		Playermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);

		//判断输赢
		ret = isWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}


		//电脑走棋
		Computermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);

		//判断输赢
		ret = isWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

	}
	if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	else if (ret == '@')
	{
		printf("电脑赢了\n");
	}
	else if(ret == 'Q')
	{
		printf("平局\n");
	}
}



int main()
{
	srand((unsigned int)time(NULL));
	int input = 1;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误，请重新选择\n");
				break;
		}
	} while (input);
	return 0;
}