#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;
    const double radiusA = 7.5; // Radius of Ground-A (diameter = 15)
    const double radiusB = 10.0; // Radius of Ground-B (diameter = 20)

    double timeA, timeB;

    cout << "Enter the time taken by Mohsin to complete one round in seconds: ";
    cin >> timeA;
    cout << "Enter the time taken by Neetesh to complete one round in seconds: ";
    cin >> timeB;

    // Calculate the distance covered by each person in one round
    double distanceA = 2 * PI * radiusA;
    double distanceB = 2 * PI * radiusB;

    // Calculate the speed of each person
    double speedA = distanceA / timeA;
    double speedB = distanceB / timeB;

    // Compare the speeds and display the result
    if (speedA > speedB) {
        cout << "Mohsin is running faster." << endl;
    } else if (speedB > speedA) {
        cout << "Neetesh is running faster." << endl;
    } else {
        cout << "Both Mohsin and Neetesh have the same speed." << endl;
    }

    return 0;
}
