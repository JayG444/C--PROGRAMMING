#include <iostream>
#include <string>
using namespace std;

class Employee
{
    public:
        int emp_id;
        char emp_name[50];
        int emp_age;
        char emp_role[50];
        float emp_salary;
        char emp_city[50];
        int emp_experience;
        char emp_company_name[50];
};

int main()
{
    Employee e[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Employee Number :" << i + 1 << endl;

        cout << "Enter Employee ID : ";
        cin >> e[i].emp_id;

        fflush(stdin);
        cout << "Enter Name : ";
        gets(e[i].emp_name);

        cout << "Enter Age : ";
        cin >> e[i].emp_age;

        fflush(stdin);
        cout << "Enter Role : ";
        gets(e[i].emp_role);

        cout << "Enter Salary : ";
        cin >> e[i].emp_salary;

        fflush(stdin);
        cout << "Enter City : ";
        gets(e[i].emp_city);

        fflush(stdin);
        cout << "Enter Company Name : ";
        gets(e[i].emp_company_name);

        cout << "Enter Experience (in years) : ";
        cin >> e[i].emp_experience;

        cout << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "ID : " << e[i].emp_id <<" || "
             << "Name : " << e[i].emp_name << " || "
             << "Age : " << e[i].emp_age <<" || "
             << "Role : " << e[i].emp_role <<" || "
             << "Salary : " << e[i].emp_salary <<" || "
             << "City : " << e[i].emp_city <<" || "
             << "Experience : " << e[i].emp_experience << " years" <<" || "
             << "Company : " << e[i].emp_company_name << endl << endl;
    }
}
