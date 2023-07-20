#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int count = 0;
    int number = 9999; // Starting number

    while (count < 5) {
        if (number % 5 == 0) {
            sum += number;
            count++;
        }
        number--;
    }

    cout << "The sum of the last 5 four-digit multiples of 5 is: " << sum << endl;

    return 0;
}
