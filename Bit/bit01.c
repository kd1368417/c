#include<stdio.h>
enum BitState
{
	Base = 0,			//00000000í èÌ
	Poison = 1 << 0,	//00000001ì≈
	Sleep = 1 << 1,		//00000010ñ∞ÇË
	Paralysis = 1 << 2, //00000100ñÉ·É
	Burn = 1 << 3,		//00001000âŒèù
	AtkUp = 1 << 4,		//00010000çUåÇóÕÉAÉbÉv
	AtkDown = 1 << 5	//00100000çUåÇóÕÉ_ÉEÉì
};
typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);
main()
{
	UINT MyState = Base;
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);
}
void DisplayStatus(UINT s)
{
	printf("****åªç›ÇÃèÛë‘****\n");
	if (s & Poison)
	{
		printf("ì≈\n");
	}
	if (s & Sleep)
	{
		printf("êáñ∞\n");
	}
	if (s & Paralysis)
	{
		printf("ñÉ·É\n");
	}
	if (s & Burn)
	{
		printf("âŒèù\n");
	}
	if (s & AtkUp)
	{
		printf("çUåÇóÕup\n");
	}
	if (s & AtkDown)
	{
		printf("çUåÇóÕdown\n");
	}
	if (s == Base)
	{
		printf("èâä˙èÛë‘\n");
	}
	printf("******************\n");
}
void ChangeFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("Ç«ÇÃèÛë‘Ç…ÇµÇ‹Ç∑Ç©?\n");
		printf("1:ì≈ 2:êáñ∞Å@3:ñÉ·É 4:âŒèù 5:çUåÇóÕup 6:çUåÇóÕdown 0:ì¸óÕèIóπ>");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default:	//ÇPÅ`ÇUÇ…ìñÇƒÇÕÇ‹ÇÁÇ»Ç¢éû
			break;
		}
	}
}
void ClearFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("Ç«ÇÃèÛë‘ÇâèúÇµÇ‹Ç∑Ç©?\n");
		printf("1:ì≈ 2:êáñ∞Å@3:ñÉ·É 4:âŒèù 5:çUåÇóÕup 6:çUåÇóÕdown 7:ëSâÒïúÅ@0:ì¸óÕèIóπ>");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:
			*s &= Base;
		default:	//ÇPÅ`ÇUÇ…ìñÇƒÇÕÇ‹ÇÁÇ»Ç¢éû
			break;
		}
	}
}
