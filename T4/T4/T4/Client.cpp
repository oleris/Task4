#include "Client.h"
#include <iostream>
#include "BuyOrder.h"
#include "SellOrder.h"
float Client::PlaceOrder(Shop* shop)
{
	std::string input, item;

	std::cout << "\nDo you want to sell or buy? ENTER s or b: ";
	std::cin >> input;
	if (input == "b")
	{
		BuyOrder* buyOrder = new BuyOrder();
		std::cout << "\nAvailable items in shop\n";
		shop->SeeItems();
		std::cout << "\nEnter item name that you want to buy: ";
		std::cin >> item;
		money -= buyOrder->CompleteOrder(item, shop);
		std::cout << "\nOrder completed\n";
	}
	else if (input == "s")
	{
		SellOrder* sellOrder = new SellOrder();
		std::cout << "\nEnter item name that you want to sell: ";
		std::cin >> item;
		sellOrder->CompleteOrder(item, shop);
	    money += sellOrder->ProcessOrder(this);
		std::cout << "\nOrder completed\n";
	}
	else
	{
		std::cout << "Incorrect input" << std::endl;
	}
	return 0;
}