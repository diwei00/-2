#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("**************************\n");
	printf("****1.play   0.excit******\n");
	printf("**************************\n");


}
void game()
{

	int index = rand() % 100 + 1;
	int guess = 0;

	while (1)
	{
		printf("请输入你猜测的数字\n");
		scanf_s("%d", &guess);
		if (guess > index)
		{
			printf("猜大了\n");
		}
		else if (guess < index)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}

}

int main()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请输入你的选择\n");
		scanf_s("%d", &input);
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