#include <iostream>

using namespace std;

/*
    Write a program that asks the user to input a temperature in celsius degrees. The result
    should be the temperature expressed in Fahrenheit and Kelvin scales.
*/

main() {
    float degreesCelsius, degreesFahrenheit, degreesKelvin;

    cout << "Enter temperature in degrees celsius: ";
    cin >> degreesCelsius;

    degreesFahrenheit = (degreesCelsius * 9/5) + 32;
    degreesKelvin = (degreesFahrenheit + 459.67) * 5/9;

    cout << degreesCelsius << " degrees celsius is " << degreesFahrenheit << " degrees fahrenheit and " << degreesKelvin << " degrees kelvin" << endl;
}
