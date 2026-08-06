#include <iostream>
using namespace std;

class Temperature
{
protected:
    int Celcius;
};

class Fahrenheit : public Temperature
{
public:
    void SetTemp()
    {
        cout << "Enter the Temperature in Celsius : ";
        cin >> Celcius;
    }

    void TempFahrenheit()
    {
        cout << "Temperature in Fahrenheit is : "
             << (Celcius * 9.0 / 5) + 32 << endl;
    }
};

class Kelvin : public Fahrenheit
{
public:
    void TempKelvin()
    {
        cout << "Temperature in Kelvin is : "
             << Celcius + 273.15 << endl;
    }
};

int main()
{
    Kelvin k1;

    k1.SetTemp();
    k1.TempFahrenheit();
    k1.TempKelvin();
}
