#include "EMPLOYEE.CPP"

int main()
{
    EmployeeManagementSystem empManagement;
    int choice;

    for(;;)
    {
        cout << "1. Add Employee" << endl;
        cout << "2. Display Employee" << endl;
        cout << "3. Delete Employee" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            empManagement.AddEmployee();
            break;
        case 2:
            empManagement.DisplayEmployee();
            break;
        case 3:
            empManagement.DeleteEmployee();
            break;
        case 4:
            empManagement.exit();
            if(choice ==4)
            {
                return 0;
            }
            break;
        default:
            cout << "Invalid Choice" << endl;
            break;
        }
    }
}
