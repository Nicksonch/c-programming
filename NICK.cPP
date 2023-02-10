#include <iostream>
using namespace std;

class BILL
{
  public:
    double units;
    double standingFee;
    double costPerUnit;
    BILL();
    double getConsumptionCost();
};

BILL::BILL()
{
    units = 0;
    standingFee = 0;
    costPerUnit = 55;
}

double BILL::getConsumptionCost(){
    return (units * costPerUnit) + standingFee;
}

int main()
{
    BILL b1;
    b1.standingFee = 250;
    cout << "Enter Units Consumed: ";
    cin >> b1.units;
    cout << "Total Amount Payable: Ksh " << b1.getConsumptionCost() << endl;
    return 0;
}
