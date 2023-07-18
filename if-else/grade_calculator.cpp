#include <iostream>

using namespace std;

char calculateGrade(int score) {
    if (score >= 90) {
        return 'A';
    } else if (score >= 80) {
        return 'B';
    } else if (score >= 70) {
        return 'C';
    } else if (score >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int score;
    cout << "Enter your score (out of 100): ";
    cin >> score;

    char grade = calculateGrade(score);

    cout << "Your grade is: " << grade << endl;

    return 0;
}
