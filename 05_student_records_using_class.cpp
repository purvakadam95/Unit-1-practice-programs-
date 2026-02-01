#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
    char name[50];
};

int main() {
    Student s[10];

    for (int i = 0; i < 10; i++) {
        cout << "Enter Roll No and Name of Student " << i + 1 << ": ";
        cin >> s[i].rollNo >> s[i].name;
    }

    cout << "\nStudent Records:\n";
    for (int i = 0; i < 10; i++) {
        cout << s[i].rollNo << "  " << s[i].name << endl;
    }

    return 0;
}
