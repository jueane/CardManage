#pragma once
#pragma execution_character_set("utf-8")

#include "DbHelper.h"
#include <sqlite3.h>


DbHelper::DbHelper()
{
}


DbHelper::~DbHelper()
{
}

//static int callback(void *NotUsed, int argc, char **argv, char **azColName)
//{
//	return 1;
//}

void DbHelper::select(string *dbName, string *sql, int(*callback)(void*, int, char**, char**))
{
	execute(dbName, sql,callback);
}

void DbHelper::insert(string *dbName, string *sql)
{
	execute(new string("cards.db"), new string("insert into card values('1000002','15036333661','李中有');"),nullptr);
}


void DbHelper::update(string *dbName, string *sql)
{

}

void DbHelper::remove(string *dbName, string *sql)
{

}


void DbHelper::execute(string *dbName, string *sql, int(*callback)(void*, int, char**, char**))
{
	sqlite3 *ppdb;
	char *zErrMsg = 0;
	int ret = sqlite3_open(dbName->c_str(), &ppdb);
	if (ret){
		//不能打开
		return;
	}

	ret = sqlite3_exec(ppdb, sql->c_str(), callback, 0, &zErrMsg);

	if (ret != SQLITE_OK){
		sqlite3_free(zErrMsg);
		//错误
	}
	else{
		//成功
	}

	sqlite3_close(ppdb);
}