#include "pch.h"
#include "Meal.h"

int Meal::GetTotalPrice()
{
	int tPrice = 0;
	std::list<CMenuItem>::iterator itr;
	for (itr = items.begin(); itr != items.end(); itr++) {
		tPrice = tPrice + itr->itemPrice;
	}

	return tPrice;
}

void Meal::Reset() {
	items.clear();
}

int Meal::Add(std::string name, int price)
{
	CMenuItem itm;
	itm.itemName = name;
	itm.itemPrice = price;
	items.push_back(itm);
	return 0;
}

void Meal::Remove(std::string name)
{

	std::list<CMenuItem>::iterator itr;
	for (itr = items.begin(); itr != items.end(); itr++) {
		
		if (itr->itemName == name)
		{
			items.erase(itr);
			break;
		}
	}
	
}

int Meal::getCount(std::string name)
{

	int n = 0;
	std::list<CMenuItem>::iterator itr;
	for (itr = items.begin(); itr != items.end(); itr++) {

		if (itr->itemName == name)
		{
			n++;
		}
	}


	return n;
}
