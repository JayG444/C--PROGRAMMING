#include <iostream>
using namespace std;

// ==================================================
// Base Class : Employee
// ==================================================
class Employee
{
protected:
    int employee_id;
    char name[50];
    int age;
    float salary;

public:
    // Setter
    void setEmployeeData()
    {
        cout << "\nEnter Employee ID : ";
        cin >> employee_id;

        cin.ignore();

        cout << "Enter Employee Name : ";
        cin.getline(name, 50);

        cout << "Enter Employee Age : ";
        cin >> age;

        cout << "Enter Employee Salary : ";
        cin >> salary;
    }

    // Getters
    int getEmployeeId()
    {
        return employee_id;
    }

    char *getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    float getSalary()
    {
        return salary;
    }

    // Display
    void display()
    {
        cout << "\nID     : " << employee_id;
        cout << "\nNAME   : " << name;
        cout << "\nAGE    : " << age;
        cout << "\nSALARY : " << salary;
    }
};

class FullTimeEmployee : public Employee
{
private:
    float bonus;

public:
    // Setter
    void setFullTimeEmployeeData()
    {
        // Call base class setter
        setEmployeeData();

        cout << "Enter Bonus : ";
        cin >> bonus;
    }

    // Getter
    float getBonus()
    {
        return bonus;
    }

    // Display
    void display()
    {

        Employee::display();

        cout << "\nBONUS  : " << bonus;
        cout << "\nTOTAL  : " << salary + bonus;
    }
};

class PartTimeEmployee : public Employee
{
private:
    float hours_worked;

public:
    // Setter
    void setPartTimeEmployeeData()
    {
        setEmployeeData();
        cout << "Enter Hours Worked : ";
        cin >> hours_worked;
    }

    // Getter
    float getHoursWorked()
    {
        return hours_worked;
    }

    // Display
    void display()
    {
        Employee::display();

        cout << "\nHOURS WORKED : " << hours_worked;
    }
};

int main()
{
    const int MAX = 100;
    Employee *employees[MAX];

    int employeeType[MAX];

    int count = 0;
    int choice;

    do
    {
        cout << "\n1. Add Employee";
        cout << "\n2. Display All Employees";
        cout << "\n3. Delete Employee";
        cout << "\n4. Exit";

        cout << "\n\nEnter Your Choice : ";
        cin >> choice;

        if (choice == 1)
        {
            if (count >= MAX)
            {
                cout << "\nEmployee list is full!";
                continue;
            }

            int type;

            cout << "\n1. Full-Time Employee";
            cout << "\n2. Part-Time Employee";

            cout << "\nEnter Employee Type : ";
            cin >> type;

            if (type == 1)
            {
                // Dynamic memory allocation
                FullTimeEmployee *temp = new FullTimeEmployee;

                temp->setFullTimeEmployeeData();

                // Store pointer in Employee pointer array
                employees[count] = temp;

                // Store employee type
                employeeType[count] = 1;

                count++;

                cout << "\nFull-Time Employee Added Successfully!";
            }

            else if (type == 2)
            {
                // Dynamic memory allocation
                PartTimeEmployee *temp = new PartTimeEmployee;

                temp->setPartTimeEmployeeData();

                // Store pointer in Employee pointer array
                employees[count] = temp;

                // Store employee type
                employeeType[count] = 2;

                count++;

                cout << "\nPart-Time Employee Added Successfully!";
            }

            else
            {
                cout << "\nInvalid Employee Type!";
            }
        }

        else if (choice == 2)
        {
            if (count == 0)
            {
                cout << "\nNo Employees Found!";
            }
            else
            {

                for (int i = 0; i < count; i++)
                {
                    // Full-Time Employee
                    if (employeeType[i] == 1)
                    {
                        FullTimeEmployee *temp =
                            (FullTimeEmployee *)employees[i];

                        temp->display();
                    }

                    // Part-Time Employee
                    else if (employeeType[i] == 2)
                    {
                        PartTimeEmployee *temp =
                            (PartTimeEmployee *)employees[i];

                        temp->display();
                    }
                }
            }
        }

        else if (choice == 3)
        {
            if (count == 0)
            {
                cout << "\nNo Employees Found!";
                continue;
            }

            int id;
            int index = -1;

            cout << "\nEnter Employee ID to Delete : ";
            cin >> id;

            // Search employee
            for (int i = 0; i < count; i++)
            {
                if (employees[i]->getEmployeeId() == id)
                {
                    index = i;
                    break;
                }
            }

            // Employee not found
            if (index == -1)
            {
                cout << "\nEmployee Not Found!";
            }

            // Employee found
            else
            {
                if (employeeType[index] == 1)
                {
                    FullTimeEmployee *temp =
                        (FullTimeEmployee *)employees[index];

                    delete temp;
                }
                else if (employeeType[index] == 2)
                {
                    PartTimeEmployee *temp = (PartTimeEmployee *)employees[index];
                    delete temp;
                }
                for (int i = index; i < count - 1; i++)
                {
                    employees[i] = employees[i + 1];
                    employeeType[i] = employeeType[i + 1];
                }

                count--;
                employees[count] = NULL;
                cout << "\nEmployee Deleted Successfully!";
            }
        }
        else if (choice == 4)
        {
            for (int i = 0; i < count; i++)
            {
                // Delete Full-Time Employee
                if (employeeType[i] == 1)
                {
                    FullTimeEmployee *temp = (FullTimeEmployee *)employees[i];
                    delete temp;
                }

                // Delete Part-Time Employee
                else if (employeeType[i] == 2)
                {
                    PartTimeEmployee *temp = (PartTimeEmployee *)employees[i];
                    delete temp;
                }
                employees[i] = NULL;
            }
            cout << "\nAll Memory Freed Successfully!";
            cout << "\nProgram Exited!";
        }
        else
        {
            cout << "\nInvalid Choice!";
        }

    } while (choice != 4);

    return 0;
}
