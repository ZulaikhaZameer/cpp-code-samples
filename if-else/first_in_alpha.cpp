#include <iostream>
#include <string>
using namespace std;

int main() {
    string name1, name2, name3;

    cout << "Enter the first name: ";
    cin >> name1;
    cout << "Enter the second name: ";
    cin >> name2;
    cout << "Enter the third name: ";
    cin >> name3;

    string firstInAlphabet = name1;

    if (name2 < firstInAlphabet) {
        firstInAlphabet = name2;
    }

    if (name3 < firstInAlphabet) {
        firstInAlphabet = name3;
    }

    cout << "The name that comes first in alphabetical order is: " << firstInAlphabet << endl;

    return 0;
}
