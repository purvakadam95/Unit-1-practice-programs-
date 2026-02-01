#include <iostream>
using namespace std;

class LeapYear {
public:
    int year;

    void check() {
        if (year % 4 == 0)
            cout << "Leap Year";
        else
            cout << "Not a Leap Year";
    }
};

int main() {
    LeapYear l;

    cout << "Enter year: ";
    cin >> l.year;

    l.check();
    return 0;
}
