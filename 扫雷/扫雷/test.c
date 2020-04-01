#define _CTR_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("**********************\n");
	printf("***1.play    0.exit***\n");
	printf("**********************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//DisplayBoard(mine,ROW,COL);
	//DisplayBoard(show, ROW, COL);
	SetMine(mine,ROW,COL);
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	FindMine(mine,show,ROW,COL);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("ÇëÑ¡Ôñ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("É¨À×\n");
			game();
			break;
		case 0:
			printf("ÍË³ö\n");
			break;
		default:
			printf("Ñ¡Ôñ´íÎó\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}