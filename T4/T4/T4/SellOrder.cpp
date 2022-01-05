#include "SellOrder.h"
float SellOrder::CompleteOrder(std::string item, Shop* shop)
{
	itm = item;
	shp = shop;
	return 0;
}
float SellOrder::ProcessOrder(Client* client)
{
	float sellPrice = 0;
	for (Item* Item : client->items)
	{
		if (Item->GetName() == itm)
		{
			sellPrice = Item->GetPrice();
			shp->items.push_back(Item);
			client->items.push_back(Item);
			client->items.pop_back();
			return sellPrice;
		}
		std::cout << "You do not have this item" << std::endl;
		return sellPrice;
	}
	
}