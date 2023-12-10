#pragma once

#ifndef week_H

#define week_H
#include "Items.h"
#include<string>

using namespace std;

class Week : public Item
{


private:

	double dollarSales = 0;
	int soldStock = 0;

	Days dayOfTheWeek;


public:

	Week();
	Week(double, int, Days);
	void setDollarSales(double);
	void setStockSold(int);
	double getDollarSales();
	int getStockSold();




};
#endif
