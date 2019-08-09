#include <iostream>
#include "cash.h"
using namespace std;

cash_r :: cash_r()
{
	cash_in = 2000;
}
cash_r :: cash_r(int cashIn)
{
	cash_in = cashIn;
}
int cash_r :: get_balance()
{
	return cash_in;
}
void cash_r :: accept_amt(int amountIn)
{
	cash_in += amountIn;

}

