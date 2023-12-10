#pragma once

#ifndef day_H
#define day_H
#include "Items.h"

using namespace std;

enum Days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };


class Day 
{

private:
	double dollarSales;
	int stockSold;
	Days day;
	


public:
	Day();
	Day(double, int, Days); // total sales and stock sold for the day
	void setDollarSales(double);
	void setStockSold(int);
	void setDay(Days);
	double getDollarSales();
	int getStockSold();
	string getDay();

	virtual void DisplayItemInfo();




};

#endif