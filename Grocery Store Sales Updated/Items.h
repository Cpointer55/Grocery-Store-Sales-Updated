#pragma once

#ifndef Items_H
#include "day.h"
#include <string>

using namespace std;

enum Categories { FRUITS, VEGTABLES, MEAT, SNACKS, DAIRY, BEVERAGES };

enum Days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

class Item : public Day
{

private:
	string itemName;
	int quantity=0;
	double price = 0;
	Categories foodType;
	double totalSales = 0;// get total sales from each element of salesNumbers variable array to get the total sales
	int totalStockSold = 0; // get total stock sold from each element salesNumbers variable array to get total stock sold
	Day dayOfWeek[7];
	public:
	//make two inherited classes					
	Item();
	Item(string, int, double, Categories, double, int);

	void setName(string n);
	void setQuantity(int q);
	void setPrice(double p);
	void setCategory(Categories c);
	void setTotalSales(double ts);
	void setTotalStockSold(int st);

	string getName();
	int getQuantity();
	double getPrice();
	Categories getCategory();
	double getTotalSales();
	int getTotalStockSold();



};

#endif