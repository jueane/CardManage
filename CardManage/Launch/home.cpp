#pragma once
#pragma execution_character_set("utf-8")

#include "home.h"
#include <sqlite3.h>
#include <QtGui/qstandarditemmodel.h>
#include <DbHelper.h>

Ui::HomeClass *Home::u;

Home::Home(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(search()));


	u = &ui;
	
	
}

//map<string, Card> *Home::cardMap;
static string num;
int Home::callback(void *NotUsed, int argc, char **argv, char **azColName)
{
	char *a = argv[0];
	//u->lineEdit->setText(QString(azColName[3]));
	//u->lineEdit->setText(QString("hello"));

	//定义表格
	QStandardItemModel *model = new QStandardItemModel();
	model->setColumnCount(4);
	model->setHeaderData(0, Qt::Horizontal, QString::fromUtf8("卡号"));
	model->setHeaderData(1, Qt::Horizontal, QString::fromUtf8("姓名"));
	model->setHeaderData(2, Qt::Horizontal, QString::fromUtf8("手机号"));
	model->setHeaderData(3, Qt::Horizontal, QString::fromUtf8("积分"));
	u->tableView->setModel(model);

	for (int i = 0; i < argc; i++){
	}
	model->setItem(0, 0, new QStandardItem(QString::fromUtf8(argv[2])));
	model->setItem(1, 0, new QStandardItem(QString::fromUtf8(argv[2])));

	

	u->lineEdit->setText(u->lineEdit->text().append("a"));

	return 1;
}

void Home::search()
{
	auto db = new DbHelper();
	db->select(new string("cards.db"),new string("select * from card"),callback);
	
	//db->insert(new string(""),new string(""));

	ui.pushButton->setText("执行完毕");

}

Home::~Home()
{

}
