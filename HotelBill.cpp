#include <iostream>
#include <iomanip>
using namespace std;

class HotelBill {
private:
    int tableNo, n;
    string customerName;
    long long contact;
    string item[20];
    int qty[20];
    float price[20], total[20];
    float grandTotal = 0, discount = 0, finalAmount = 0;

public:
    void getData() {
        cout << "Enter Table Number: ";
        cin >> tableNo;

        cout << "Enter Customer Name: ";
        cin.ignore();
        getline(cin, customerName);

        cout << "Enter Customer Contact: ";
        cin >> contact;

        cout << "Enter Number of Items: ";
        cin >> n;

        for (int i = 0; i < n; i++) {
            cout << "\nItem " << i + 1 << " Name: ";
            cin.ignore();
            getline(cin, item[i]);

            cout << "Quantity: ";
            cin >> qty[i];

            cout << "Price per unit: ";
            cin >> price[i];

            total[i] = qty[i] * price[i];
            grandTotal += total[i];
        }
    }

    void calculateDiscount() {
        if (grandTotal > 5000)
            discount = grandTotal * 0.20;
        else if (grandTotal > 3000)
            discount = grandTotal * 0.10;
        else if (grandTotal > 1000)
            discount = grandTotal * 0.05;
        else
            discount = 0;

        finalAmount = grandTotal - discount;
    }

    void displayBill() {
        cout << "\n------------ Hotel Bill ------------\n";
        cout << "Table No: " << tableNo << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Customer Contact: " << contact << endl;

        cout << "\nOrder Details:\n";
        cout << left << setw(15) << "Item"
             << setw(10) << "Qty"
             << setw(10) << "Price"
             << setw(10) << "Total" << endl;

        for (int i = 0; i < n; i++) {
            cout << left << setw(15) << item[i]
                 << setw(10) << qty[i]
                 << setw(10) << price[i]
                 << setw(10) << total[i] << endl;
        }

        cout << "\nTotal Amount: " << grandTotal << endl;
        cout << "Discount: -" << discount << endl;
        cout << "Final Amount: " << finalAmount << endl;
    }
};

int main() {
    HotelBill hb;
    hb.getData();
    hb.calculateDiscount();
    hb.displayBill();
    return 0;
}
