#include <iostream>
using namespace std;

int main() {
    int start, end;
    int count = 0;

    cout << "Enter the starting number of the range: ";
    cin >> start;

    cout << "Enter the ending number of the range: ";
    cin >> end;

    if (start > end) {
        cout << "Invalid input. The starting number should be less than or equal to the ending number." << endl;
        return 0;
    }

    for (int i = start; i <= end; i++) {
        if (i % 5 == 0) {
            count++;
        }
    }

    cout << "The number of multiples of 5 between " << start << " and " << end << " is: " << count << endl;

    return 0;
}
