#include<iostream>
#include<string.h>
using namespace std;

class Car
{
private:
    char model[20];
    int year;
    int speed;
public:

    void setCarData()
    {
        fflush(stdin);
        cout << "Enter the model of the Car :";
        gets(model);

        cout << "Enter year for Car :";
        cin >> year;

        cout << "Enter the speed of the car :";
        cin >> speed;
    }
    void getCarData()
    {
        cout << "Model : " << model << endl;
        cout << "Year  : " << year << endl;
        cout << "Speed : " << speed << endl;
    }
};

int main()
{
    Car c1;

    c1.setCarData();
    c1.getCarData();
}