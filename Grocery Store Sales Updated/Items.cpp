#include<iostream>
#include<string>
#include "Items.h"
using namespace std;

Item::Item()
{

}

//Item constructor
Item::Item(string n, int q, double p, Categories c, double ts, int st)
{
	this->itemName = n;
	this->quantity = q;
	this->price = p;
	this->foodType = c;
	this->totalSales = ts;
	this->totalStockSold = st;
}



void Item::setName(string n) {
	this->itemName = n;

}

void Item::setQuantity(int q)
{

	this->quantity = q;

}

void Item::setPrice(double p)
{
	this->price = p;
}

void Item::setCategory(Categories c)
{
	c = static_cast<Categories>(c);
	this->foodType = c;
}

void Item::setTotalSales(double ts)
{
	this->totalSales = ts;

}

void Item::setTotalStockSold(int st)
{
	this->totalStockSold = st;

}


string Item::getName()
{
	return itemName;
}

int Item::getQuantity()
{
	return quantity;
}

double Item::getPrice()
{
	return price;
}

Categories Item::getCategory()
{
	return foodType;
}

double Item::getTotalSales()
{
	return totalSales;
}

int Item::getTotalStockSold()
{
	return totalStockSold;
}

