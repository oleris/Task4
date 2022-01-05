#include <iostream>
#include "Client.h"

int main()
{
    Item* item = new Item("Bicycle", 100);
    Shop* shop = new Shop();
    Client* client = new Client();
    client->items.push_back(item);
    std::cout << "client's money:\n";
    client->SetMoney(1000);
    std::cout << client->GetMoney();
    client->PlaceOrder(shop);
    client->PlaceOrder(shop);
   std::cout << client->GetMoney();

}


