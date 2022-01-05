#ifndef T4_CLIENT_H
#define T4_CLIENT_H
#include <vector>
#include "Item.h"
#include "Shop.h"
class Client
{
public:
	std::vector<Item*> items;
	float PlaceOrder(Shop* shop);
	float GetMoney()
	{
		return money;
	}
	void SetMoney(float amount)
	{
		money = amount;
	}

private:
	float money;
};
#endif //T4_CLIENT_H