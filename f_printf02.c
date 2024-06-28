#include<stdio.h>
main()
{
	int score = 0, maxscore;
	char ch, name[20],maxname[20];
	FILE* fp;
	if (fp = fopen("score.txt", "r"))
	{
		fscanf(fp, "%s%d", maxname, &maxscore);
		fclose(fp);
	}
	printf("最高得点　名前：%s スコア：%d\n", maxname, maxscore);
	printf("プレイヤー名を入力：");
	scanf("%s", name);
	while (1)
	{
		printf("スコア:%d('e'で終了)\n", score);
		ch = getch();
		if (ch == 'e')break;
		score++;
	}
	if (maxscore < score)
	{
		if (fp = fopen("score.txt", "w"))
		{
			fprintf(fp, "%s\n%d\n", name, score);
			fclose(fp);
		}
	}
}