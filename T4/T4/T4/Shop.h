#ifndef T4_SHOP_H
#define T4_SHOP_H
#include <vector>
#include "Item.h"

class Shop
{

public:
	Shop()
	{
		items.push_back(new Item("Computer", 300));
		items.push_back(new Item("Laptop", 200));
		items.push_back(new Item("Hairdryer", 10));
		items.push_back(new Item("Ball", 5));
		items.push_back(new Item("Lego toy", 70));
		items.push_back(new Item("TV", 300));
		items.push_back(new Item("Fridge", 300));
		items.push_back(new Item("Desk", 100));
		items.push_back(new Item("Chair", 300));
		items.push_back(new Item("Shelf", 300));
		items.push_back(new Item("Lamp", 300));
	}
	std::vector<Item*> items;
	bool TakeOrder(std::string itemName);
	float GetItemPrice(std::string itemName);
	void SeeItems();

	
}; 
#endif //T4_SHOP_H
