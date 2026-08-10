#include <iostream>
#include <string.h>
using namespace std;

class Vehicle
{
protected:
    int vehicleID;
    char manufacturer[20];
    char model[20];
    int year;
    static int totalvehicles;

public:
    // default Constructor
    Vehicle()
    {
        vehicleID = 0;
        strcpy(manufacturer, "NO MANUFACTURER");
        strcpy(model, "NO MODEL");
        year = 0;
    }
    // Destructor
    ~Vehicle()
    {
    }
    // setter
    void setVehicleDetails(int id, char manu[20], char mod[20], int y)
    {
        vehicleID = id;
        strcpy(manufacturer , manu);
        strcpy(model , mod);
        year = y;
    }
    // Getter
    void getVehicleDetails()
    {
        cout << endl;
        cout << "Vehicle ID : " << vehicleID << endl;
        cout << "Manufacturer : " << manufacturer << endl;
        cout << "Model : " << model << endl;
        cout << "Year : " << year << endl;
    }
    void display()
    {
        getVehicleDetails();
    }
};
class Car : public Vehicle
{
    char fueltype[20];
};
class ElectricCar : public Car
{
    char batterycapacity[20];
};
class Aircraft : public Vehicle
{
    int flightRange;
};
class FlyingCar : public Car, public Aircraft
{
};
class SportsCar : public ElectricCar
{
    int topSpeed;
};
class Sedan : public Car
{
};
class SUV : public Car
{
    void inputVehicleDetails()
    {
        cout << "Enter Vehicle ID: ";
        cin >> vehicleID;

        fflush(stdin);
        cout << "Enter Car Manufacturer: ";
        gets(manufacturer);

        fflush(stdin);
        cout << "Enter Car Model: ";
        gets(model);
    }
};
// static member
int Vehicle::totalvehicles = 10;

class VehicleRegistry
{
    Vehicle vehicles[20];
};
