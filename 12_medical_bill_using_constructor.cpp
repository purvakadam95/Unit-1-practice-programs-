#include <iostream>
using namespace std;

class MedicalBill {
public:
    float billAmount;

  
    MedicalBill(float amount) {
        billAmount = amount;
        cout << "Medical Bill Amount = " << billAmount;
    }
};

int main() {
    float amount;

    cout << "Enter medical bill amount: ";
    cin >> amount;

    MedicalBill m(amount);
    return 0;
}
