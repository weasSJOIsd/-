#include <graphics.h>		
#include<stdio.h>
#include<time.h>
#define N 5
int Map[N];
void InitBlack()
{
	for (int i = 0; i < 5; i++)
	{
		Map[i] = rand() % N;
	}
}
void DrawBlack()
{
	for (int i = 0; i < 5; i++)
	{
		fillrectangle(Map[i] * 100, i * 120, Map[i] * 100 + 100, i * 120 + 120);
	}
}
void Draw()
{
	setlinecolor(BLACK);
	setfillcolor(WHITE);
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			fillrectangle(j * 100, i * 120, j * 100 + 100, i * 120 + 120);
		}
	}
	setfillcolor(BLACK);
	DrawBlack();
}
void Play()
{

}
int main()
{
	srand(time(NULL));
	initgraph(500, 480);
	InitBlack();
	Draw();
	getchar();
}