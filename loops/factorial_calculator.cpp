#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        int factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        cout << "Factorial of " << i << " is: " << factorial << endl;
    }

    return 0;
}
