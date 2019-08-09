#ifndef CASH_H 
#define CASH_H

class cash_r

{

    private:

      int cash_in;

    public:

      cash_r(); //Constructor Sets the cash in the register to a default amount.

      cash_r(int cashIn); //Constructor Sets the cash in the register to a specific amount.

      int get_balance();   //The value of cash_in is returned.

      void accept_amt(int amountIn);//Function to receive the amount deposited by the customer 

                                          //and update amount in the register.

};

#endif
