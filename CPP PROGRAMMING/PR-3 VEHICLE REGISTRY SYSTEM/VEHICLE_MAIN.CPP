#include "VEHICLE.CPP"

int main()
{
    VehicleRegistry vehicle;
    int choice, number;

    for (;;)
    {
        cout << endl;
        cout << "1. Add New Vehicle Record" << endl;
        cout << "2. Display All Vehicle Records" << endl;
        cout << "3. Search Vehicle by ID" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            vehicle.addVehicle();
            break;

        case 2:
            vehicle.displayAllVehicles();
            break;

        case 3:
            cout << "Enter Vehicle ID : ";
            cin >> number;
            vehicle.searchVehicleByID(number);
            break;

        case 4:
            cout << "Exit" << endl;
            if (choice == 4)
            {
                return 0;
            }

            break;

        default:
            cout << "Invalid Choice";
        }
    }
}
