#pragma once


class Card
{
public:
	Card();
	~Card();

	int getPoint();
	int addPoint(int number);
	int subPoint(int number);


private:
	int point;



public:
	char *id;
	char *phone;
	char *name;
	char *parentId;
	char *childId;

};

