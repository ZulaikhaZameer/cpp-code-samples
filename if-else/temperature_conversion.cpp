#include <iostream>
using namespace std;

int main() {
    char unit;
    double temperature, convertedTemperature;

    cout << "Enter the temperature: ";
    cin >> temperature;

    cout << "Enter 'C' for Celsius or 'F' for Fahrenheit: ";
    cin >> unit;

    if (unit == 'C' || unit == 'c') {
        convertedTemperature = (9 * temperature) / 5 + 32;
        cout << "Converted temperature in Fahrenheit: " << convertedTemperature << "°F" << endl;
    } else if (unit == 'F' || unit == 'f') {
        convertedTemperature = (5 * (temperature - 32)) / 9;
        cout << "Converted temperature in Celsius: " << convertedTemperature << "°C" << endl;
    } else {
        cout << "Error: Invalid unit entered." << endl;
    }

    return 0;
}
