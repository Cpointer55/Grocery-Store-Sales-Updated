#pragma once

#ifndef Items_H

#include <string>


enum Categories { FRUITS, VEGTABLES, MEAT, SNACKS, DAIRY, BEVERAGES };

enum Days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

class Item
{

	string itemName;
	int quantity=0;
	double price = 0;
	Categories foodType;
	double totalSales = 0;// get total sales from each element of salesNumbers variable array to get the total sales
	int totalStockSold = 0; // get total stock sold from each element salesNumbers variable array to get total stock sold
	Days days[7];

	//make two inherited classes					


	void setName(string n);
	void setQuantity(string q);
	void setPrice(float p);
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