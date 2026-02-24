#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  int quantity;
  cout << "Enter quantity of software package units purchased: ";
  cin >> quantity;
  double price = 199;

  if (quantity < 10);
  else if (quantity < 20)
    price *= .8;
  else if (quantity < 50)
    price *= .7;
  else if (quantity < 100)
    price *= .6;
  else
    price *= .5;
  
  double totalcost = quantity * price;
  cout << "The total cost of the purchase is " << fixed << setprecision(2) << totalcost << endl;


    /*|Quantity|Discount|
    |---|---|
    |10-19|20%|
    |20-40|30%|
    |50-99|40%|
    |100 or more | 50%|*/

}
