#include "BuyOrder.h"

float BuyOrder::CompleteOrder(std::string item, Shop* shop)
{
	if (shop->TakeOrder(item))
	{
		return shop->GetItemPrice(item);
	}
	return 0;
}