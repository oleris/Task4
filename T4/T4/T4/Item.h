#ifndef T4_ITEM_H
#define T4_ITEM_H
#include <string>
class Item
{
public:
	Item(std::string Name, float Price)
	{
		name = Name;
		price = Price;
	}
		float GetPrice()
		{
			return price;
		}
		std::string GetName()
		{
			return name;
		}

private:
	float price;
	std::string name;
};
#endif //T4_ITEM_H