#ifndef T4_BUYORDER_H
#define T4_BUYORDER_H
#include "Order.h"

class BuyOrder : public Order
{
public:
	virtual float CompleteOrder(std::string item, Shop* shop) override;
};
#endif //T4_BUYORDER_H
