#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
protected:
    int employee_id;
    char name[20];
    int age;
    float salary;

public:
    // Setter
    void setEmployeeData()
    {
        cout << "Enter Employee ID : ";
        cin >> employee_id;

        fflush(stdin);
        cout << "Enter Employee Name : ";
        gets(name);

        cout << "Enter Employee Age : ";
        cin >> age;

        cout << "Enter Employee salary : ";
        cin >> salary;
    }
    // getter
    void getEmployeeData()
    {
        cout << "ID     : " << employee_id;
        cout << "NAME   : " << name;
        cout << "AGE    : " << age;
        cout << "SALARY : " << salary;
    }
};
class FullTimeEmployee : public Employee
{
private:
    float bonus;

    void setEmployeeData()
    {
        
    };

    void getFullTimeEmployeeData()
    {
        getEmployeeData();
    }
};
class PartTimeEmployee
{
};
