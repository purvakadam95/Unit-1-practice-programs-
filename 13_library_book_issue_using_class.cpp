#include <iostream>
using namespace std;

class Library {
public:
    int bookId;
    char bookName[50];
    int availableCopies;

    void getDetails() {
        cout << "Enter Book ID: ";
        cin >> bookId;
        cout << "Enter Book Name: ";
        cin >> bookName;
        cout << "Enter Available Copies: ";
        cin >> availableCopies;
    }

    void displayDetails() {
        cout << "\nBook ID: " << bookId;
        cout << "\nBook Name: " << bookName;
        cout << "\nAvailable Copies: " << availableCopies << endl;
    }

    void issueBook() {
        if (availableCopies > 0) {
            cout << "\nBook Issued Successfully";
            availableCopies--;
        } else {
            cout << "\nBook Not Available";
        }
    }
};

int main() {
    Library l;

    l.getDetails();
    l.displayDetails();

    char choice;
    cout << "\nDo you want to issue the book? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        l.issueBook();
    }

    return 0;
}
