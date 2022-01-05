#ifndef T4_ORDER_H
#define T4_ORDER_H

#include "Shop.h"
#include "Client.h"
#include <iostream>
class Order
{
public:
	virtual float CompleteOrder(std::string item, Shop* shop) = 0;
	
};
#endif //T4_ORDER_H