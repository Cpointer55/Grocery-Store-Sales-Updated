#pragma once

#ifndef day_H
#define day_H
#include "Items.h"



class Day : public Item
{

private:
	double dollarSales;
	int stockSold;



public:
	Day();
	Day(double, int); // total sales and stock sold for the day
	void setDollarSales(double);
	void setStockSold(int);
	double getDollarSales();
	int getStockSold();




};

#endif