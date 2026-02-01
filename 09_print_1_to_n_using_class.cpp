#include <iostream>
using namespace std;

class PrintNumbers {
public:
    int n;

    void display() {
        for (int i = 1; i <= n; i++) {
            cout << i << " ";
        }
    }
};

int main() {
    PrintNumbers p;

    cout << "Enter value of n: ";
    cin >> p.n;

    p.display();
    return 0;
}
