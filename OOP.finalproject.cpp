#include <iostream>
using namespace std;

class TemperatureConverter
{
public:

    float celsiusToFahrenheit(float celsius)
    {
        return (celsius * 9 / 5) + 32;
    }

    float fahrenheitToCelsius(float fahrenheit)
    {
        return (fahrenheit - 32) * 5 / 9;
    }

    float celsiusToKelvin(float celsius)
    {
        return celsius + 273.15;
    }

    float kelvinToCelsius(float kelvin)
    {
        return kelvin - 273.15;
    }
};

int main()
{
    TemperatureConverter temp;
    int choice;
    float temperature;

    do
    {
        cout << "\n===== Temperature Converter =====\n";
        cout << "1. Celsius to Fahrenheit\n";
        cout << "2. Fahrenheit to Celsius\n";
        cout << "3. Celsius to Kelvin\n";
        cout << "4. Kelvin to Celsius\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter temperature in Celsius: ";
            cin >> temperature;
            cout << "Temperature in Fahrenheit: "
                 << temp.celsiusToFahrenheit(temperature) << endl;
            break;

        case 2:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temperature;
            cout << "Temperature in Celsius: "
                 << temp.fahrenheitToCelsius(temperature) << endl;
            break;

        case 3:
            cout << "Enter temperature in Celsius: ";
            cin >> temperature;
            cout << "Temperature in Kelvin: "
                 << temp.celsiusToKelvin(temperature) << endl;
            break;

        case 4:
            cout << "Enter temperature in Kelvin: ";
            cin >> temperature;
            cout << "Temperature in Celsius: "
                 << temp.kelvinToCelsius(temperature) << endl;
            break;

        case 5:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice! Try Again.\n";
        }

    } while (choice != 5);

    return 0;
}
