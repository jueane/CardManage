#ifndef HOME_H
#define HOME_H

#include <QtWidgets/QMainWindow>
#include "ui_home.h"
#include <Card.h>

using namespace std;

class Home : public QMainWindow
{
	Q_OBJECT

public:
	Home(QWidget *parent = 0);
	~Home();

	static int callback(void *NotUsed, int argc, char **argv, char **azColName);

	int callbackTemp(void *NotUsed, int argc, char **argv, char **azColName);

	//static map<string,Card> *cardMap;

	

	public slots:
	void search();

private:
	Ui::HomeClass ui;
	static Ui::HomeClass *u;
};

#endif // HOME_H
