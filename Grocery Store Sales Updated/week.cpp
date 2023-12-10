#include<iostream>
#include<string>
#include "week.h"
using namespace std;


Week::Week()
{

}

Week::Week(double ts, int st, Days d)
{
	this->dollarSales = ts;
	this->soldStock = st;
	this->dayOfTheWeek = d;
}


void Day::setDollarSales(double ts)
{
	this->dollarSales = ts;

}

void Day::setStockSold(int st)
{
	this->stockSold = st;


}


void Day::setDay(Days d)
{
	d = static_cast<Days>(d);

	this->day = d;

}

double Day::getDollarSales()
{

	return dollarSales;
}

int Day::getStockSold()
{
	return stockSold;
}

string Day::getDay()
{
	string stringDay;

	if (day == SUNDAY)
	{
		stringDay = "Sunday";
	}

	else if (day == MONDAY)
	{
		stringDay = "Monday";

	}

	else if (day == TUESDAY)
	{
		stringDay = "Tuesday";

	}

	else if (day == WEDNESDAY)
	{
		stringDay = "Wednesday";

	}

	else if (day == THURSDAY)
	{
		stringDay = "Thursday";

	}

	else if (day == FRIDAY)
	{
		stringDay = "Friday";

	}

	else if (day == SATURDAY)
	{
		stringDay = "Saturday";


	}


}