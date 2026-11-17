#include <iostream>
using namespace std;

int main() {
    float amount, ratePercent, rateValue;
    cin >> amount >> ratePercent;
    rateValue = amount * (ratePercent / 100.0);
    cout << "the rate value is " << rateValue << endl;
    return 0;
}