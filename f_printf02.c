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
	printf("�ō����_�@���O�F%s �X�R�A�F%d\n", maxname, maxscore);
	printf("�v���C���[������́F");
	scanf("%s", name);
	while (1)
	{
		printf("�X�R�A:%d('e'�ŏI��)\n", score);
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