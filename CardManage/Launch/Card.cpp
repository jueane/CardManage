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

//返回成功或失败
int Card::addPoint(int number)
{
	point += number;
	//存储

	return 1;
}

//返回成功或失败
int Card::subPoint(int number)
{
	point -= number;
	//存储

	return 1;
}
