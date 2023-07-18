#include <iostream>
using namespace std;

int main() {
    int birthMonth, birthDate;

    cout << "Enter your month of birth (1-12): ";
    cin >> birthMonth;

    cout << "Enter your date of birth: ";
    cin >> birthDate;

    // Determine the zodiac star sign based on birth month and date
    string zodiacSign;
    if ((birthMonth == 3 && birthDate >= 21) || (birthMonth == 4 && birthDate <= 19)) {
        zodiacSign = "Aries";
    } else if ((birthMonth == 4 && birthDate >= 20) || (birthMonth == 5 && birthDate <= 20)) {
        zodiacSign = "Taurus";
    } else if ((birthMonth == 5 && birthDate >= 21) || (birthMonth == 6 && birthDate <= 20)) {
        zodiacSign = "Gemini";
    } else if ((birthMonth == 6 && birthDate >= 21) || (birthMonth == 7 && birthDate <= 22)) {
        zodiacSign = "Cancer";
    } else if ((birthMonth == 7 && birthDate >= 23) || (birthMonth == 8 && birthDate <= 22)) {
        zodiacSign = "Leo";
    } else if ((birthMonth == 8 && birthDate >= 23) || (birthMonth == 9 && birthDate <= 22)) {
        zodiacSign = "Virgo";
    } else if ((birthMonth == 9 && birthDate >= 23) || (birthMonth == 10 && birthDate <= 22)) {
        zodiacSign = "Libra";
    } else if ((birthMonth == 10 && birthDate >= 23) || (birthMonth == 11 && birthDate <= 21)) {
        zodiacSign = "Scorpio";
    } else if ((birthMonth == 11 && birthDate >= 22) || (birthMonth == 12 && birthDate <= 21)) {
        zodiacSign = "Sagittarius";
    } else if ((birthMonth == 12 && birthDate >= 22) || (birthMonth == 1 && birthDate <= 19)) {
        zodiacSign = "Capricorn";
    } else if ((birthMonth == 1 && birthDate >= 20) || (birthMonth == 2 && birthDate <= 18)) {
        zodiacSign = "Aquarius";
    } else if ((birthMonth == 2 && birthDate >= 19) || (birthMonth == 3 && birthDate <= 20)) {
        zodiacSign = "Pisces";
    } else {
        zodiacSign = "Invalid Date or Month";
    }

    // Display the zodiac star sign
    cout << "Your zodiac sign is: " << zodiacSign << endl;

    return 0;
}
