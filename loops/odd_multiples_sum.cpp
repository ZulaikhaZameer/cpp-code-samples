#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int count = 0;
    int number = 1;

    while (count < 10) {
        if (number % 2 != 0 && number % 3 == 0) {
            sum += number;
            count++;
        }
        number++;
    }

    cout << "The sum of the first 10 odd multiples of 3 is: " << sum << endl;

    return 0;
}
