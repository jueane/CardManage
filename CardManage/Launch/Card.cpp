#include "Card.h"


Card::Card()
{
}


Card::~Card()
{
}

int Card::getPoint()
{
	return point;
}

//���سɹ���ʧ��
int Card::addPoint(int number)
{
	point += number;
	//�洢

	return 1;
}

//���سɹ���ʧ��
int Card::subPoint(int number)
{
	point -= number;
	//�洢

	return 1;
}
