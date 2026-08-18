#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
public:
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
        cout << "ID     : " << employee_id << endl;
        cout << "NAME   : " << name << endl;
        cout << "AGE    : " << age << endl;
        cout << "SALARY : " << salary << endl;
    }
};
class FullTimeEmployee : public Employee
{
private:
    float bonus;

public:
    void setFullTimeEmployeeData()
    {
        setEmployeeData();
        cout << "Enter Employee Bonus : ";
        cin >> bonus;
    };

    void getFullTimeEmployeeData()
    {
        getEmployeeData();
        cout << "Bonus : " << bonus << endl;
    }
};
class PartTimeEmployee : public Employee
{
private:
    int hours_worked;

public:
    void setPartTimeEmployeeData()
    {
        setEmployeeData();
        cout << "Enter Employee Hours Worked : ";
        cin >> hours_worked;
    }

    void getPartTimeEmployeeData()
    {
        getEmployeeData();
        cout << "Hours Worked : " << hours_worked << endl;
    }
};

class EmployeeManagementSystem : public Employee
{
    Employee *emp[10];
    int count;

public:
    void AddEmployee()
    {
        int choice;
        cout << "Enter 1 for Full Time Employee." << endl;
        cout << "Enter 2 for Part Time Employee." << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        if (choice == 1)
        {
            emp[count] = new FullTimeEmployee();
            emp[count]->setEmployeeData();
            count++;
        }
        else if (choice == 2)
        {
            emp[count] = new PartTimeEmployee();
            emp[count]->setEmployeeData();
            count++;
        }
        else
        {
            cout << "Invalid Choice!" << endl;
        }
    }

    void DisplayEmployee()
    {
        for (int i = 0; i < count; i++)
        {
            emp[i]->getEmployeeData();
        }
    }

    void DeleteEmployee()
    {
        int id;
        cout << "Enter Employee ID to delete : ";
        cin >> id;

        for (int i = 0; i < count; i++)
        {
            if (emp[i]->employee_id == id)
            {
                delete emp[i];
                for (int j = i; j < count - 1; j++)
                {
                    emp[j] = emp[j + 1];
                }
                count--;
                cout << "Employee Deleted Successfully" << endl;
                return;
            }
        }
        cout << "Employee Not Found" << endl;
    }
    void exit()
    {
        for (int i = 0; i < count; i++)
        {
            delete emp[i];
        }
    }
};
