#include<stdio.h>
enum BitState
{
	Base = 0,			//00000000�ʏ�
	Poison = 1 << 0,	//00000001��
	Sleep = 1 << 1,		//00000010����
	Paralysis = 1 << 2, //00000100���
	Burn = 1 << 3,		//00001000�Ώ�
	AtkUp = 1 << 4,		//00010000�U���̓A�b�v
	AtkDown = 1 << 5,	//00100000�U���̓_�E��
	Dead = 1 << 6,		//01000000���S�t���O
	Atk_Skill = 1 << 7	//10000000
};

int TurnCount = 0;

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
	printf("****���݂̏��****\n");
	if (s & Poison)
	{
		printf("��\n");
	}
	if (s & Sleep)
	{
		printf("����\n");
	}
	if (s & Paralysis)
	{
		printf("���\n");
	}
	if (s & Burn)
	{
		printf("�Ώ�\n");
	}
	if (s & AtkUp)
	{
		printf("�U����up\n");
	}
	if (s & AtkDown)
	{
		printf("�U����down\n");
	}
	if (s == Base)
	{
		printf("�������\n");
	}
	printf("******************\n");
}
void ChangeFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("�ǂ̏�Ԃɂ��܂���?\n");
		printf("1:�� 2:�����@3:��� 4:�Ώ� 5:�U����up 6:�U����down 0:���͏I��>");
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
		default:	//�P�`�U�ɓ��Ă͂܂�Ȃ���
			break;
		}
	}
}
void ClearFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("�ǂ̏�Ԃ��������܂���?\n");
		printf("1:�� 2:�����@3:��� 4:�Ώ� 5:�U����up 6:�U����down 7:�S�񕜁@0:���͏I��>");
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
		default:	//�P�`�U�ɓ��Ă͂܂�Ȃ���
			break;
		}
	}
}