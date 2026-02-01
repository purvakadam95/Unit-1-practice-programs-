#include <iostream>
using namespace std;

class Discount {
public:
    float price;

    void calculateDiscount() {
        float discount = price * 0.02;
        float finalPrice = price - discount;

        cout << "Original Price = " << price << endl;
        cout << "Discount (2%) = " << discount << endl;
        cout << "Final Price = " << finalPrice << endl;
    }
};

int main() {
    Discount d;

    cout << "Enter price: ";
    cin >> d.price;

    d.calculateDiscount();
    return 0;
}
