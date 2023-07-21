#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Enter the value of N: ";
    cin >> N;

    if (N <= 0) {
        cout << "Invalid input. N should be a positive integer." << endl;
        return 0;
    }

    int count = 0;
    int number = 101; // Starting number

    cout << "The first " << N << " three-digit odd numbers are:" << endl;

    while (count < N) {
        cout << number << " ";
        number += 2; // Move to the next odd number
        count++;
    }

    cout << endl;

    return 0;
}
