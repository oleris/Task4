#include <iostream>
#include "Shop.h"

bool Shop::TakeOrder(std::string itemName)
{
	for (Item* item : items)
	{
		if (item->GetName() == itemName)
		{
			return true;
		}
	}
	return false;
}
float Shop::GetItemPrice(std::string itemName)
{
	for (Item* item : items)
	{
		if (item->GetName() == itemName)
		{
			return item->GetPrice();
		}
		
	}
	std::cout << "Item was not found, balance was charged" << std::endl;
}

void Shop::SeeItems()
{
	for (Item* item : items)
	{
		std::cout << item->GetName() << " " << item->GetPrice() << std::endl;
			
	}
}