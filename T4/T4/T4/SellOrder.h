#ifndef T4_SELLORDER_H
#define T4_SELLORDER_H
#include "Order.h"
class SellOrder : public Order
{
public:
	virtual float CompleteOrder(std::string item, Shop* shop) override;
    float ProcessOrder(Client* client);
private:
	std::string itm;
	Shop* shp;
};
#endif //T4_SELLORDER_H
