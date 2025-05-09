#pragma once
#include <sqlite3.h>
#include <string>

// Runs a SQL statement that does not return rows (e.g. CREATE, INSERT)
bool execNonQuery(sqlite3* db, const std::string& sql);
void initDatabase(sqlite3* db);

