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
    Vehicle()
    {
        vehicleID = 0;
        strcpy(manufacturer, "NO MANUFACTURER");
        strcpy(model, "NO MODEL");
        year = 0;
    }

    ~Vehicle()
    {
    }

    void inputVehicleDetails()
    {
        cout << "Enter Vehicle ID: ";
        cin >> vehicleID;

        fflush(stdin);
        cout << "Enter Manufacturer: ";
        gets(manufacturer);

        fflush(stdin);
        cout << "Enter Model: ";
        gets(model);

        cout << "Enter Year: ";
        cin >> year;
    }

    void setVehicleDetails(int id, char manu[20], char mod[20], int y)
    {
        vehicleID = id;
        strcpy(manufacturer, manu);
        strcpy(model, mod);
        year = y;
    }

    int getVehicleID()
    {
        return vehicleID;
    }

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

// static member
int Vehicle::totalvehicles = 10;

class Car : public Vehicle
{
protected:
    char fueltype[20];
};

class ElectricCar : public Car
{
protected:
    char batterycapacity[20];
};

class Aircraft : public Vehicle
{
protected:
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
};

class VehicleRegistry
{
    Vehicle vehicles[20];
    int totalVehicles;

public:
    VehicleRegistry()
    {
        totalVehicles = 0;
    }

    void addVehicle()
    {
        if (totalVehicles < 20)
        {
            vehicles[totalVehicles].inputVehicleDetails();
            totalVehicles++;
        }
        else
        {
            cout << "Vehicle List is Full" << endl;
        }
    }

    void displayAllVehicles()
    {
        if (totalVehicles == 0)
        {
            cout << "No Vehicle Records Available" << endl;
            return;
        }

        for (int i = 0; i < totalVehicles; i++)
        {
            vehicles[i].display();
        }
    }

    void searchVehicleByID(int id)
    {
        for (int i = 0; i < totalVehicles; i++)
        {
            if (vehicles[i].getVehicleID() == id)
            {
                cout << "Vehicle Found :" << endl;
                vehicles[i].display();
                return;
            }
        }

        cout << "Vehicle Not Found" << endl;
    }
};
