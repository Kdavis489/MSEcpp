#pragma once
#include "Item.h"
using namespace std;

class Inventory
{
public:
	Inventory();
	~Inventory();
	void addItem(const Item &item);
	void removeItem(int index);
	inline void debugPrint() const
	{
		for (size_t i = 0; i < nrOfItems; i++)
		{
			std::cout << itemArr[i]->debugPrint() << std::endl;
		}
	}

private:
	int maxInv;
	int nrOfItems;
	Item** itemArr;
	void expandInv();
	void initialize(const int from);
};