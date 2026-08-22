#include <iostream>
#include <string.h>
using namespace std;

class Device
{
protected:
    char brand[20];
    float powerconsumption;

public:
    void setDeviceData()
    {
        fflush(stdin);
        cout << "Enter the Brand of the Device :";
        gets(brand);

        cout << "Enter the Power Consumption of the Device :";
        cin >> powerconsumption;
    }
    void getDeviceData()
    {
        cout << "Brand             : " << brand << endl;
        cout << "Power Consumption : " << powerconsumption << endl;
    }
};
class Laptop : public Device
{
public:
    void LaptopData()
    {
        cout << endl
             << "========INPUT LAPTOP DETAILS========" << endl;
        setDeviceData();
    }
};
class Smartphone : public Device
{
public:
    void SmartPhoneData()
    {
        cout << endl
             << "========INPUT SMARTPHONE DETAILS========" << endl;
        setDeviceData();
    }
};

int main()
{
    Laptop l1;
    Smartphone s1;

    l1.LaptopData();
    s1.SmartPhoneData();

    cout << endl
         << "========LAPTOP DETAILS========" << endl;
    l1.getDeviceData();
    cout << endl
         << "========SMARTPHONE DETAILS========" << endl;
    s1.getDeviceData();
}