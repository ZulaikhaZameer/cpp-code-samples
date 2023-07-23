#include <iostream>
using namespace std;

int main() {
    int rows = 5; // Number of rows
    int stars = 9; // Number of stars in the first row

    for (int i = rows; i >= 1; --i) {
        for (int j = 1; j <= rows - i; ++j) {
            cout << "  "; // Two spaces for indentation
        }
        for (int k = 1; k <= stars; ++k) {
            cout << "* ";
        }
        cout << endl;
        stars -= 2; // Reduce the number of stars in each row
    }

    return 0;
}
