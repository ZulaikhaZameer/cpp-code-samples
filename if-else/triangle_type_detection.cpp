#include <iostream>
using namespace std;

int main() {
    int angle1, angle2, angle3;

    cout << "Enter the three angles of a triangle: ";
    cin >> angle1 >> angle2 >> angle3;

    // Check if the angles form a valid triangle
    if (angle1 + angle2 + angle3 == 180) {
        // Check the type of triangle based on angles
        if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
            cout << "The triangle is a right-angle triangle." << endl;
        } else if (angle1 < 90 && angle2 < 90 && angle3 < 90) {
            cout << "The triangle is an acute-angle triangle." << endl;
        } else {
            cout << "The triangle is an obtuse-angle triangle." << endl;
        }
    } else {
        cout << "Invalid triangle. The angles do not add up to 180 degrees." << endl;
    }

    return 0;
}
