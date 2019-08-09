#ifndef PRODUCT_H
#define PRODUCT_H


class product 
{

   private:

      int stock_Item ; //variable to store the stock of items in the dispenser

      int item_cost ; //variable to store the cost of an item

   public:

      product (); //Constructor Sets the cost and number of items in the dispenser to the default

      product (int setNoOfItems, int setCost); //Constructor Sets to the values specified

      int get_stock(); //The value of numberOfItems is returned.

      int get_cost();      //Function to show the cost of the item. The value of cost is returned.

      void make_sale(); //Function to reduce the number of items by 1.

};
#endif
