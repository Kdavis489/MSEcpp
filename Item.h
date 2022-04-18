#pragma once
#include <iostream>
#include <string>
#include <iomanip>

class Item
{
public:
	Item();
	~Item();
	inline std::string debugPrint() const { return name; }

private:
	std::string name;
	int buyValue;
	int sellValue;
};

