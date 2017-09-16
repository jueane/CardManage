#pragma once

#include <Card.h>
#include <string>

using namespace std;

class DbCallback{
public:
	void callback();
};


class DbHelper
{
public:
	DbHelper();
	~DbHelper();

	void select(string *dbName, string *sql, int(*callback)(void*, int, char**, char**));

	void insert(string *dbName, string *sql);

	void update(string *dbName, string *sql);

	void remove(string *dbName, string *sql);

private:

	void execute(string *dbName, string *sql, int(*callback)(void*, int, char**, char**));
};

