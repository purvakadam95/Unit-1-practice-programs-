#include <iostream>
using namespace std;

class Swap {
public:
    int a, b;

    void swapNumbers() {
        int temp = a;
        a = b;
        b = temp;
    }
};

int main() {
    Swap s;

    cout << "Enter two numbers: ";
    cin >> s.a >> s.b;

    s.swapNumbers();

    cout << "After Swapping:\n";
    cout << "a = " << s.a << endl;
    cout << "b = " << s.b << endl;

    return 0;
}
