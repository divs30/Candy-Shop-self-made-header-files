#include <iostream>
#include "cash.h"
#include "product.h"

using namespace std; 


//1. 
 void showSelection()

{

       cout << "*** Welcome to Candy Shop ***" << endl;

       cout << "To select an item, enter " << endl;

       cout << "1 for Candy" << endl;

       cout << "2 for Chips" << endl;

       cout << "3 for Gum" << endl;

       cout << "4 for Cookies" << endl;

       cout << "5 to exit" << endl;

}

 

//2. 
void sellProduct(product & prod_obj, cash_r& cash_obj)

        {  int amount; //variable to hold the amount entered

          int amount2 = 0; //variable to hold the extra amount needed

              if (prod_obj.get_stock() > 0)//(check if the product is available or not)
              {

                  cout<<"Please deposit amount "<<prod_obj.get_cost()<<endl;

                     cin >> amount;
					 if(amount < prod_obj.get_cost())
					 {
						cout<<"Please enter remaining amount that is : rupees "<<prod_obj.get_cost() - amount<<endl;
						cin>>amount2;
						amount += amount2;
					 }	
                     if(amount >= prod_obj.get_cost())// (check the price for product , then sale it)
                     {
						cash_obj.accept_amt(amount);
					    prod_obj. make_sale();	

						cout<<"Please collect your item and remaining money from below "<<amount - prod_obj.get_cost()<<endl;
                     }
                     else
					 {
						cout<<"The amount is not enough. ,Please try again receive your money from below"<<endl;
					 }

                         
			}
            else
			{
                     cout<<"Sorry, this product is sold out."<<endl;

            }

 

       }

//3.
 int main()

{

      cash_r cash;

      product candy(100, 50);

      product chips(100, 65);

      product gum(75, 45);

      product cookies(50, 85);

      int choice;

      showSelection();

      cin >> choice;

      while (choice != 5)

      {

             switch (choice)

             {

                    case 1:

                         sellProduct( candy, cash);

                          break;

                    case 2:

                          sellProduct(chips, cash);

                          break;

                    case 3:

                          sellProduct ( gum, cash);

                          break;

                    case 4:

                          sellProduct (cookies, cash);

                          break;

                    default:

                          cout << "Invalid selection." << endl;

             }

             showSelection();

             cin >> choice;

      }     

      return 0;

}
