#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string name;
    char plan;
    double usedData;

    cout << "Input customer name: ";
    cin >> name;
    cout << "Input phone plan purchased as a single letter (A, B or C): ";
    cin >> plan;
    cout << "Input data used in gigabytes: ";
    cin >> usedData;

    double priceA = 39.99, dataA = 2.0, extraCost = 8.0;
    double priceB = 59.99, dataB = 8.0;
    double priceC = 79.99;
    double billcost;
    bool Advertise = false;

    // part 1: Billing
    switch (plan){
    case 'A':
        billcost = priceA;
        if (usedData > dataA){
            billcost += extraCost * (usedData - dataA);
            if(billcost > priceB)
                Advertise = true;
        }
        break;
    case 'B':
        billcost = priceB;
        if (usedData > dataB){
            billcost += extraCost * (usedData - dataB);
            if(billcost > priceC)
                Advertise = true;
        }
        break;
    case 'C':
        billcost = priceC;
        break;
    default:
        return -1;
    }

    // part 2: Message creation
    string message = "===========\n";
    message += "Customer: " + name + "\n";
    message += "Plan: " + string(1, plan) + "\n";
    message += "Data used: " + to_string(usedData) + " gigabytes\n";
    message += "===========\n";
    message += "Total billed: ";
    message += to_string(billcost) + "\n";

    // part 3: Advertisement
    if (!Advertise){
        cout << message;
        return 0;
    }
    switch (plan){
    case 'A':
        message += "If you had plan B, you could of saved ";
        if (usedData > dataB)
            message += to_string(billcost - (priceB + extraCost * (usedData - dataB)));
        else
            message += to_string(billcost - priceB);
        message += "\n";
    case 'B':
        if (billcost < priceC){
            cout << message;
            return 0;
        }
        message += "If you had plan C, you could of saved ";
        message += to_string(billcost - priceC) + "\n";
        break;
    default:
        return -2;
    }
    cout << message;

    return 0;
}