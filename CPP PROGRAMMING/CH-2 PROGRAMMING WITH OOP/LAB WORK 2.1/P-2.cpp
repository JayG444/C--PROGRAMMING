#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
    int car_id;
    char car_color[50];
    char car_model[50];
    int car_release_year;
    char car_company_name[50];
};

int main()
{
    Car c[4];

    for (int i = 0; i < 4; i++)
    {
        cout << "Car Number :" << i + 1 << endl;

        cout << "Enter Car ID: ";
        cin >> c[i].car_id;

        fflush(stdin);
        cout << "Enter Car Model: ";
        gets(c[i].car_model);

        cout << "Enter Release Year: ";
        cin >> c[i].car_release_year;

        fflush(stdin);
        cout << "Enter Color: ";
        gets(c[i].car_color);

        fflush(stdin);
        cout << "Enter Company Name: ";
        gets(c[i].car_company_name);

        cout << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        cout << "Car ID : " << c[i].car_id << " || "
             << "Car Company Name : " << c[i].car_company_name << " || "
             << "Car Model : " << c[i].car_model << " || "
             << "Car color : " << c[i].car_color << " || "
             << "Release year : " << c[i].car_release_year << endl
             << endl;
    }
}
