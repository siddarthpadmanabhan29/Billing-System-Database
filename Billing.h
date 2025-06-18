#pragma once
#include <string>
#include <sqlite3.h>

struct itemProduct {
	std::string name;
	int quantity;
	double price;
};

class Billing
{
private:
	sqlite3* db;
	const double taxRate = 0.05;
	void initializeDatabase();

public:
	Billing();
	~Billing();

	void addItemProduct();
	void billReceipt();
	void run();



};
