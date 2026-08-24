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
    virtual void calculateDiscount() = 0;
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
    void calculateDiscount()
    {
        cout << "Discount for Laptop: 5.04%" << endl;
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
    void calculateDiscount()
    {
        cout << "Discount for Smartphone: 6.03%" << endl;
    }
};

int main()
{
    Laptop l1;
    Smartphone s1;

    l1.LaptopData();
    s1.SmartPhoneData();

    cout << "========LAPTOP DETAILS========" << endl;
    l1.getDeviceData();
    l1.calculateDiscount();

    cout << "========SMARTPHONE DETAILS========" << endl;
    s1.getDeviceData();
    s1.calculateDiscount();

    return 0;
}
