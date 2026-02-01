#include <iostream>
using namespace std;

class Prime {
public:
    int n;

    void checkPrime() {
        int flag = 0;

        if (n <= 1) {
            cout << "Not a Prime Number";
            return;
        }

        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            cout << "Prime Number";
        else
            cout << "Not a Prime Number";
    }
};

int main() {
    Prime p;
    cout << "Enter a number: ";
    cin >> p.n;
    p.checkPrime();
    return 0;
}
