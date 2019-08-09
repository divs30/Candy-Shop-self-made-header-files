#include <iostream>
#include "product.h"
using namespace std;

product :: product()
{
	stock_Item = 50;
	item_cost = 50;

}
product :: product(int setNoOfItems, int setCost)
{
	stock_Item = setNoOfItems;
	item_cost = setCost;
}

int product :: get_stock() //The value of numberOfItems is returned.
{
	return stock_Item;
}

int product :: get_cost()     //Function to show the cost of the item. The value of cost is returned.
{
	return item_cost;
}

void product :: make_sale() //Function to reduce the number of items by 1.
{
	stock_Item--;
}

